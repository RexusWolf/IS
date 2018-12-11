// ID_001: Search Student
//The function lets you search an student in the list.
//The function returns the number of students that match a surname or dni.

/* Database opening and check of students quantity matching surname.
In case there's no matching student, the function returns 0. If there's more than
one matching student, the function asks for the DNI.
*/

#include "persona.h"
#include "teacher.h"
#include "student.h"
#include <string>
#include <iostream>
#include <fstream>

std::string aux_surname;
int counter = 0;

int Find_Student(){
  //We use a txt file as database, so, let's open .txt
  //Declare an input file stream (ifstream) variable.

  ifstream inFile;

  inFile.open("database.txt");
  //check if the file exist or can be open.
  if (!inFile){
    std::cout << "Not able to open database" << \n;
    //finish the program with an error.
    exit(1);
  }

  while (inFile >> aux_surname) {
    if (aux_surname == student.surname) {
      /* if the student exist, increase the counter to know how many Student
      exist with the same surname */
      counter++;
    }
  }

  //if counter is 0, is because there aren't student whith this surname
  if (counter == 0){
    std::cout << "Student not found" << '\n';
    return counter
  }

  //if counter is 1, only found 1 sudent so, return 1 "the numer of Student with this surname"
  if (counter == 1){
    std::cout << "Student found" << '\n';
    return counter;
  }

  //if we get more than 1 matches, we have to search by dni
  if (counter > 1){
    std::cout << "More than 1 student found, start searching by dni" << '\n';
    std::cout << "Instert the dni of the student." << '\n';
    std::cin >> aux_surname;
    //the same algoritmo de antes xd
    counter = 0
    while (inFile >> aux_surname){
      if (aux_surname == student.dni){
        counter++
      }
    }

    //if counter is 0, is because there aren't student whith this surname
    if (counter == 0){
      std::cout << "Student not found" << '\n';
      return counter
    }

    //if counter is 1, only found 1 sudent so, return 1 "the numer of Student with this surname"
    if (counter == 1){
      std::cout << "Student found" << '\n';
      return counter;
    }

    if (counter > 2){
      std::cout << "Error" << '\n';
      exit(0);
    }
  }


inFile.close();
}
