// ID_000: Insert Student

#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include "id_000.h"
#include "person.h"
#include "student.h"
using std::string;

// This function creates an auxiliar student that we'll send to INSERT_STUDENT.
Student newStudent(){
  Student aux;
  string dni[50];
  string name[50];
  string surname[50];
  string address[50];
  string email[50];
  string birthdate[50];
  int teamnumber, course, role, phonenumber;
  cout<<"Introduce NAME"<<endl;
  name = getName();
  setName(name);
  cout<<"Introduce ADDRESS"<<endl;
  address = getAddress();
  setAddress(address);
  cout<<"Introduce EMAIL"<<endl;
  email = getEmail();
  setEmail(email);
  cout<<"Introduce BIRTH DATE"<<endl;
  birthdate = getBirthDate();
  setBirthDate(birthdate);
  cout<<"Introduce PHONE NUMBER"<<endl;
  phonenumber = getPhoneNumber();
  setPhoneNumber(phonenumber);
  cout<<"Introduce HIGHEST COURSE REGISTERED"<<endl;
  course = getCourse();
  setCourse(course);
  cout<<"Introduce TEAM NUMBER"<<endl;
  teamnumber = getTeamNumber();
  setTeamNumber(teamnumber);
  cout<<"Introduce ROLE"<<endl;
  role = getRole();
  setRole(role);

  return aux;
}

void INSERT_STUDENT(string &namefile, string &s.surname, string &s.dni){
  // In the next codeline we'll check if the student is already in our database.
  if(FIND_STUDENT(s.surname, s.dni)>=1){
    return 1;
  }

  else{
    std::ofstream f;
    f.open(namefile, std:ios::out | ios:binary); // Opens file in write mode.
    Student aux = newStudent();
    aux.dni = s.dni;
    aux.surname = s.surname;
    f.write((char*)&aux, sizeof(Student)); // Adds new student at the end of the file.
    f.close();
  }
}
