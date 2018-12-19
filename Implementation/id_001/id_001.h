#ifndef ID_001_H
    #define ID_001_H

    #include "student.h"
    #include <string>
    #include <list>
    #include <iostream>
    using std::list;
    
    list<Student>::iterator studentSearch(list<Student>::iterator b,
    list<Student>::iterator e, bool show = false);
    list<Student>::iterator findStudent(int opt, const string& src,
    list<Student>::iterator b, list<Student>::iterator e, bool show = false);
#endif