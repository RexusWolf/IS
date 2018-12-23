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
  
  cout << "Introduce Binary File name: "<<endl;
  cin>>filename;
  std::ifstream bfile ;
  bfile.open(filename, std::ios::binary);
  if (bfile.is_open()){
    while(!bfile.eof()){
      bfile.read((char*)&aux, sizeof(StudentBin));
      Student a(aux);
      students.push_back(a);
    }
    bfile.close();
  }
  else cout<<"Error opening binary file."<<endl;
  return students;
}
