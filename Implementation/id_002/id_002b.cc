// ID_0002a: Remove all Student

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <list>
#include "id_002b.h"
#include "../classes/student.h"
using std::list;

void deleteAll(list<Student> students){
  list<Student>::iterator b = students.begin();
  list<Student>::iterator e = students.end();
  students.erase(b,e);

  cout << "All students has been removed." << endl;

}
