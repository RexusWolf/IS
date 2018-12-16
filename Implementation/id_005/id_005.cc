// ID_000: Show Students

#include "student.h"
#include <string>
#include <list>
#include <iostream>
#include "id_005.h"
using std::list;
using std::string

void showStudents(list<Student> students){
  list<Student>iterator it = students.begin();
  list<Student>iterator e = students.end();
  string namefile = "Students.md"
  std::ofstream file(namefile); // Outfile creation.
  for(it; it != e; it++){ // Displacement of the iterator through the list.
    file << *it << "\n";
  }
}
