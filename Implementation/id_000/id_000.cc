// ID_000: Insert Student

#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <list>
#include "id_000.h"
#include "person.h"
#include "student.h"¡
using std::string;
using std::list;

// This function creates an auxiliar student that we'll send to INSERT_STUDENT.
Student newStudent(){
  Student aux;
  string aux[32];
  int intaux;
  cout<<"Introduce NAME: "<<endl;
  cin>>aux;
  aux.setName(aux);
	cout<<"Introduce SURNAME: "<<endl;
  cin>>aux;
  aux.setSurname(aux);
  cout<<"\nIntroduce ADDRESS: "<<endl;
  cin>>aux;
  aux.setAddress(aux);
  cout<<"\nIntroduce EMAIL: "<<endl;
  cin>>aux;
  aux.setEmail(aux);
  cout<<"\nIntroduce BIRTH DATE: "<<endl;
  cin>>aux;
  aux.setBirthDate(aux);
  cout<<"\nIntroduce PHONE NUMBER: "<<endl;
  cin>>intaux;
  aux.setPhoneNumber(intaux);
  cout<<"\nIntroduce HIGHEST COURSE REGISTERED: "<<endl;
  cin>>intaux;
  aux.setCourse(intaux);
  cout<<"\nIntroduce TEAM NUMBER: "<<endl;
  cin>>intaux;
  aux.setTeamNumber(intaux);
  cout<<"\nIntroduce ROLE: "<<endl;
  cin>>intaux;
  aux.setRole(intaux);

  return aux;
}

bool insertStudent(Student& s, list<Student> students){
  // In the next codeline we'll check if the student is already in our database.
  if(students.size()<150){
    if(findStudent(s.getSurname(), s.getDNI(), students_.begin(), students_.end())>=1){
      return false;
    }

    else{
      students_.insert(students_.end(), s); // Adds new student at the end of the file.
      return true;
    }
  }
  else return false;
}
