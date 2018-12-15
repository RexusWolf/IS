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
  string dni[32];
  string name[32];
  string surname[32];
  string address[32];
  string email[32];
  string birthdate[32];
  int teamnumber, course, role, phonenumber;
  cout<<"Introduce NAME: "<<endl;
  cin>>dni;
  aux.setName(name);
  cout<<"\nIntroduce ADDRESS: "<<endl;
  cin>>address;
  aux.setAddress(address);
  cout<<"\nIntroduce EMAIL: "<<endl;
  cin>>address;
  aux.setEmail(email);
  cout<<"\nIntroduce BIRTH DATE: "<<endl;
  cin>>email;
  aux.setBirthDate(birthdate);
  cout<<"\nIntroduce PHONE NUMBER: "<<endl;
  cin>>birthdate;
  aux.setPhoneNumber(phonenumber);
  cout<<"\nIntroduce HIGHEST COURSE REGISTERED: "<<endl;
  cin>>phonenumber;
  aux.setCourse(course);
  cout<<"\nIntroduce TEAM NUMBER: "<<endl;
  cin>>course;
  aux.setTeamNumber(teamnumber);
  cout<<"\nIntroduce ROLE: "<<endl;
  cin>>role;
  aux.setRole(role);

  return aux;
}

void INSERT_STUDENT(string &s.surname, string &s.dni, list<Student> students_){
  // In the next codeline we'll check if the student is already in our database.
  if(FIND_STUDENT(s.surname, s.dni, students_.begin(), students_.end())>=1){
    return 1;
  }

  else{
    Student aux = newStudent();
    aux.dni = s.dni;
    aux.surname = s.surname;
    students_.insert(students_.end(), aux); // Adds new student at the end of the file.
    return 0;
  }
}
