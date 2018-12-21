// ID_000: Show Students


#include <string>
#include <list>
#include <iostream>
#include <fstream>
#include "../libs/parser.h"
#include "id_005.h"
#include "../classes/student.h"
using std::list;
using std::string;

bool compareName(const Student &a, const Student &b){
  return (a.getName() < b.getName());
}
bool compareDNI(const Student &a, const Student &b){
  return (a.getDNI() < b.getDNI());
}
bool compareSurname(const Student &a, const Student &b){
  return (a.getSurname() < b.getSurname());
}
// This function chooses the direction our sorting is going to be sorted.
int orderChoice(){
  int choice;
  cout << "\nChoose sorting direction: " << endl;
  cout << "1. Ascendant" << endl;
  cout << "4. Descendant" << endl;
  cin >> choice;
  return choice;
}
// This function chooses the way the file is going to be sorted.
int sortMenu(){
  int option;
  do{
    cout << "Choose sorting method: " << endl;
    cout << "1. Name" << endl;
    cout << "2. Surname" << endl;
    cout << "3. DNI" << endl;
    cin >> option;
  }while( (option != 1) && (option != 2) && (option != 3) );
  option = option * orderChoice(); // 1-5 Ascendant 4,8,12 Descendant
  return option;
}

bool typeFile(){
  int opt;
  do{
    cout << "Markdown or HTML?" << endl;
    cout << "0. Markdown\n1. HTML" << endl;
    cin >> opt;
  }while( (opt != 0) && (opt != 1) );

  return opt;
}

void showStudents(list<Student> students){
  int option, html;
  string filename;
  list<Student> aux = students;
  list<Student>::iterator it = students.begin();
  list<Student>::iterator e = students.end();
  std::cout << "Introduce file name." << endl;
  std::cin >> filename;
   // Outfile creation.

  option = sortMenu();
  switch(option){

    case 1: // Name ascendant
      aux.sort(compareName);
    case 2: // Surname ascendant
      aux.sort(compareSurname);
    case 3: // DNI ascendant
      aux.sort(compareDNI);
    case 4: // Name descendant
      aux.sort(compareName);
      aux.reverse();
    case 8: // Surname descendant
      aux.sort(compareSurname);
      aux.reverse();
    case 12: // DNI descendant
      aux.sort(compareDNI);
      aux.reverse();

  }
  html = typeFile();
  // Markdown file creation.
  std::ofstream file(filename + (html?".html":".md"));
  std::stringstream buffer;
  for(it; it != e; it++){ // Displacement of the iterator through the list.
    file << *it << "\n";
  }
  file.close();

  if(html){
    std::ifstream reading(filename);
    buffer << reading.rdbuf();
    reading.close();
    std::shared_ptr<maddy::Parser> parser = std::make_shared<maddy::Parser>();
    string htmlOutput = parser->Parse(buffer);
    file.open(filename);
    file << htmlOutput;
    file.close();
  }
}
