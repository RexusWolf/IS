// ID_001: Search Student
//The function lets you search an student in the list.
//The function returns the number of students that match a surname or dni.

/* Database opening and check of students quantity matching surname.
In case there's no matching student, the function returns 0. If there's more than
one matching student, the function asks for the DNI.
*/


#include <string>
#include <list>
#include <iostream>
using std::list;
#include "../classes/student.h"
#include "id_001.h"

list<Student>::iterator studentSearch(list<Student>::iterator b,
list<Student>::iterator e, bool show){
	int opt;
	string aux;
	do{
		std::cout << "Select attribute:\n1.Surname\n2.DNI\n0.Exit\n\n";
		std::cin >> opt;
	}while( (opt != 0) && (opt != 1) && (opt != 2) );
	if(opt == 0){
		return e;
	}
	std::cout << ((opt==1)?"Introduce surname:":"Introduce DNI:") << '\n';
	std::cin >> aux;
	return(findStudent(opt, aux, e, b, show));
}

list<Student>::iterator findStudent(int opt, const string& src,
list<Student>::iterator b, list<Student>::iterator e, bool show){
	list<Student>::iterator it, it2;
	int counter = 0;
	string aux;
	if(b == e){
		return(e);
	}
	if(opt == 1){
		for(it = b; it != e; ++it){
			if(it->getSurname() == src){
				counter ++;
				it2 = it;
				if(show){
					std::cout << *it;
				}
			}
		}
		if(counter > 1){
			std::cout << "Conflict in surnames, please introduce dni:\n";
			std::cin >> aux;
			return(findStudent(2, aux, b, e, show));
		}
		else if(counter == 1){
			return(it2);
		}
		else{
			return(e);
		}
	}
	else{
		for(it = b; it != e; ++it){
			if(it->getDNI() == src){
				if(show){
					std::cout << *it;
				}
				return(it);
			}
		}
		return(e);
	}
}
