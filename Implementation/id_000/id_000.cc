// ID_000: Insert Student

#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include "id_000.h"

using std::string;

// This function changes /n to /0.
void changeString(string *namestring){
  for(int i=0; i<strlen(namestring); i++){
    if(namestring[i]=='\n') namestring[i]='\0';
  }
}

string* rline(string* dst, FILE* stream){
  string* aux =fgets(dst, 50, stream);
  if(aux!=NULL){
    changeString(aux);
  }
  return aux;
}

// This function creates an auxiliar student that we'll send to INSERT_STUDENT.
Student newStudent(){
  Student aux;
  string dni[50];
  string name[50];
  string surname[50];
  string address[50];
  string email[50];
  string birthdate[50];

  printf("Introduce NAME:\n");
  rline(aux.name, stdin);
  printf("Introduce ADDRESS:\n");
  rline(aux.address, stdin);
  printf("Introduce EMAIL:\n");
  rline(aux.email, stdin);
  printf("Introduce BIRTH DATE:\n");
  rline(aux.birthdate, stdin);
  printf("Introduce PHONE NUMBER:\n");
  scanf("%d", &aux.phonenumber);
  printf("Introduce HIGHEST COURSE REGISTERED:\n");
  scanf("%d", %aux.course);
  printf("Introduce TEAM NUMBER:\n");
  scanf("%d", %aux.teamnumber);
  printf("Introduce ROLE:\n");
  scanf("%d", %aux.role);

  return aux;
}

void INSERT_STUDENT(string *namefile, string &s.surname, string &s.dni){
  // In the next codeline we'll check if the student is already in our database.
  if(FIND_STUDENT(s.surname, s.dni)>=1){
    return 1;
  }

  else{
    std::ofstream f;
    f.open(namefile, std:ios::out); // Opens file in write mode.
    Student aux = newStudent();
    aux.dni = s.dni;
    aux.surname = s.surname;
    f << aux << '\n' // Adds new student at the end of the file.
    fclose(f);
  }
}
