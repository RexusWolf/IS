// ID_0002a: Remove a Student

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <list>
#include "id_002a.h"
#include "../classes/student.h"
#include "../id_001/id_001.h"
using std::list;

int deleteStudent (list<Student> students){
  list<Student>::iterator it;

  if(students.empty()){
    return -1; // List is empty.
  }

  else if((it = studentSearch(students.begin(), students.end())) == students.end()){
    return -2; // Student doesn't exist in the database.
  }

  else{
    students.erase(it);
    return 1; // Student deleted.
  }
}
