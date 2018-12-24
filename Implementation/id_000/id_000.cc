// ID_000: Insert Student

#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <list>
#include "id_000.h"
#include "../classes/student.h"
#include "../id_001/id_001.h"
using std::string;
using std::list;

bool insertStudent(const Student& s, list<Student> students){
  // In the next codeline we'll check if the student is already in our database.
  if(students.size()<150){
    if(findStudent(2, s.getDNI(), students.begin(), students.end()) == students.end()){
      return false;
    }

    else{

      students.push_back(s); // Adds new student at the end of the file.
      return true;
    }
  }
  else return false;
}
