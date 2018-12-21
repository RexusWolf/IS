// ID_003: Modify Student

#include "id_003.h"
#include "../id_001/id_001.h"
using std::string;
using std::list;

bool modifyStudent(list<Student> students){
  list<Student>::iterator b = students.begin();
  list<Student>::iterator e = students.end();
  list<Student>::iterator it = studentSearch(b, e, true);
  if(it == e){
    std::cout << "There's no matching student."<< std::endl;
    return (false);
  }
  Student aux("", "", "");
  std::cin >> aux;
  students.insert(it, aux);
  students.erase(it);
  return (true);
}