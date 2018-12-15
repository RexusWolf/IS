// ID_000: Modify Student

#include "id_003.h"

using std::string;
using std::list;

bool modifyStudent(list<Student> students){
  list<Student>iterator b = students.begin();
  list<Student>iterator e = students.end();
  if((list<Student>iterator it = studentSearch(b, e, true)) == e){
    cout<< "There's no matching student."<<endl;
    return false;
  }
  else{
    Student aux = newStudent();
    students.insert(it, aux);
    students.erase(it);
    return true;
  }
}
