// ID_0002a: Remove a Student

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <list>
#include "id_002a.h"
#include "../classes/student.h"
using std::list;

int deleteStudent (list<Student> students, string surname){
  list<Student>::iterator it;

  if(students.empty()){
    return -1; // List is empty.
  }

  else if((it = findStudent(1, surname, students.begin(), students.end())) == students.end()){
    return -2; // Student doesn't exist in the database.
  }

  else{
    students.erase(it);
    return 1; // Student deleted.
  }
}
