#include "student.h"
#include <string>
#include <list>
#include <iostream>
#include "id_006.h"
#include "student.h"
using std::list;
using std::string


fstream& file
list<Student> importData(){
  string namefile[32];
  list<Student> students;
  cout<<"Introduce Binary File name: "<<endl;
  cin>>namefile;
  std::ifstream bfile (namefile);
  if (bfile.is_open()){
    bfile.read(students, nStudents * sizeof(Student));
    bfile.close();
  }
  else cout<<"Error opening binary file."<<endl;
}
