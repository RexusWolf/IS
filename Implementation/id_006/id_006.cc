// ID_006: Import Data

#include <string>
#include <list>
#include <iostream>
#include <fstream>
#include "id_006.h"
#include "../classes/student.h"
using std::list;
using std::string;



list<Student> importData(){
  string filename;
  list<Student> students;
  StudentBin aux;
  
  std::cout << "Introduce Binary File name: "<<endl;
  std::cin >> filename;
  std::ifstream bfile ;
  bfile.open(filename, std::ios::binary);
  if (bfile.is_open()){
    bfile.read((char*)&aux, sizeof(StudentBin));
    while(!bfile.eof()){
      Student a(aux);
      students.push_back(a);
      bfile.read((char*)&aux, sizeof(StudentBin));
    }
    bfile.close();
  }
  else std::cout<<"Error opening binary file."<<endl;
  
  return students;
}
