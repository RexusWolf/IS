// ID_0002a: Remove a Student

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <list>
#include "id_002A.h"
#include "person.h"
#include "student.h"
using std::list;

int deleteStudent (list<Student> students, string surname, string dni){
  list<Student>::iterator it;
  
  if(students.empty()){
    return -1; // List is empty.
  }

  else if((it = findStudent(2, s.getDNI(), students.begin(), students.end())) == students.end()){
    return -2; // Student doesn't exist in the database.
  }

  else{
    students.erase(it);
    return 1; // Student deleted.
  }
}
