// ID_000: Show Students

#include "student.h"
#include <string>
#include <list>
#include <iostream>
#include "id_005.h"
using std::list;
using std::string

// This function chooses the direction our sorting is going to be sorted.
int orderChoice(){
  int choice;
  cout << "\nChoose sorting direction: " << endl;
  cout << "1. Ascendant" << endl;
  cout << "2. Descendant" << endl;
  cin >> choice;
  return choice;
}
// This function chooses the way the file is going to be sorted.
void sortMenu(){
  int option;
  cout << "Choose sorting method: " << endl;
  cout << "1. Name" << endl;
  cout << "2. Surname" << endl;
  cout << "3. DNI" << endl;
  cout << "4. Highest year registered" << endl;
  cin>> option;
  orderChoice();
  option = option * orderChoice(); // 1-4 Ascendant 5-8 Descendant
  return option;
}

int typeFile(){
  int opt;
  do{
    cout << "Markdown or HTML?" << endl;
    cout << "0. Markdown\n1. HTML\n2.Exit" << endl;
    cin >> opt;
  }while( (opt != 0) && (opt != 1) && (opt != 2) );

  return opt;
}

void showStudents(list<Student> students){
  list<Student>iterator it = students.begin();
  list<Student>iterator e = students.end();
  int option, html;
  string namefile[32];

  cout << "Introduce file name." << endl;
  cin>>namefile;
  std::ofstream file(namefile); // Outfile creation.

  option = sortMenu();
  switch(option){

    case 1: // Name ascendant

    case 2: // Surname ascendant

    case 3: // DNI ascendant

    case 4: // Highest year registered ascendant

    case 5: // Name descendant

    case 6: // Surname descendant

    case 7: // DNI descendant

    case 8: // Highest year registered descendant

  }
  html = typeFile();

  // Markdown file creation.
  for(it; it != e; it++){ // Displacement of the iterator through the list.
    file << *it << "\n";
  }

}
