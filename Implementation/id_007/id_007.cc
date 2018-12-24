// ID_000: Save Data

#include <string>
#include <list>
#include <fstream>
#include <iostream>
#include "id_007.h"
#include "../classes/student.h"
using std::list;
using std::string;

list<Student> saveData(list<Student> students){
  string filename;

  cout << "Introduce Binary File name: "<<endl;
  cin >> filename;
  std::ofstream bfile ;
  bfile.open(filename, std::ios::binary);
  for(list<Student>::iterator it = students.begin(); it != students.end(); ++it){
    StudentBin aux(*it);
    bfile.write((char*)&aux, sizeof(StudentBin));
  }
  bfile.close();
  return students;
}
