#ifndef STUDENT_H
#define STUDENT_H value

#include <string>
#include <cstring>
#include "person.h"
#include <fstream>
#include <istream>
#include <ostream>
using std::ostream;
using std::string;
using std::ofstream;
using std::istream;
using std::cout;
using std::cin;
using std::endl;

class StudentBin;

class Student:public Person{
private:
  int highestCourse_;
  int teamNumber_;
  bool isLeader_;
public:
  Student(const string &name, const string &surname, const string &dni,
    const string &address = "", const string &birthDate = "",
    const string &email = "", const int phoneNumber = 0,
    const int highestCourse = 1, const int teamNumber = 0,
    const bool isLeader = false);

  Student(const StudentBin& sb);

  inline int getHighestCourse() const {return highestCourse_;}
  inline void setHighestCourse(const int highestCourse){
    highestCourse_ = highestCourse;
  }

  inline int getTeamNumber() const {return teamNumber_;}
  inline void setTeamNumber(const int teamNumber) {teamNumber_ = teamNumber;}

  inline bool getIsLeader() const {return isLeader_;}
  inline void setIsLeader(const bool isLeader) {isLeader_ = isLeader;}

  friend class StudentBin;

  friend ofstream& operator<<(ofstream& stream, const Student &s){
      stream << "* **Surname, Name:** " << s.getSurname() <<", "<< s.getName();
      stream << "\n* **DNI:** " << s.getDNI() << "\n* **Course:** " << s.getHighestCourse();
      stream << "\n* **Team Number:** " << std::to_string(s.getTeamNumber());
      stream << "\n* **Role:** " << s.getIsLeader()?" Leader":" Member";
      stream << "\n* **Address:** " << s.getAddress() << "\n* **Email:**" << s.getEmail();
      stream << "\n* **Phone Number:** " << std::to_string(s.getPhoneNumber());
      stream << "\n* **Birth Date:** " << s.getBirthDate() << "\n\n\n";
      return stream;
  }

  friend ostream& operator<<(ostream& stream, const Student &s){
    stream << "Surname, Name: " << s.getSurname() <<", "<< s.getName();
    stream << "\nDNI: " << s.getDNI() << "\nHighest Course: " << s.getHighestCourse();
    stream << "\nTeam Number: " << std::to_string(s.getTeamNumber());
    stream << "\nRole: " << (s.getIsLeader()?" Leader":" Member");
    stream << "\nAddress: " << s.getAddress() << "\nEmail: " << s.getEmail();
    stream << "\nPhone Number: " << std::to_string(s.getPhoneNumber());
    stream << "\nBirth Date: " << s.getBirthDate() << "\n\n\n";
    return stream;
  };

  friend istream& operator>>(istream& stream, Student &s){
    char[32] aux;
    int intaux;

    cout<<"Introduce NAME: "<< endl;
    stream>>aux;
    s.setName(aux);

    cout<<"\nIntroduce SURNAME: "<<endl;
    stream>>aux;
    s.setSurname(aux);

    cout<<"\nIntroduce DNI: "<<endl;
    stream>>aux;
    s.setDNI(aux);

    cout<<"\nIntroduce ADDRESS: "<<endl;
    stream>>aux;
    s.setAddress(aux);

    cout<<"\nIntroduce EMAIL: "<<endl;
    stream>>aux;
    s.setEmail(aux);

    cout<<"\nIntroduce BIRTH DATE: "<<endl;
    stream>>aux;
    s.setBirthDate(aux);

    cout<<"\nIntroduce PHONE NUMBER: "<<endl;
    stream>>intaux;
    s.setPhoneNumber(intaux);

    cout<<"\nIntroduce HIGHEST COURSE REGISTERED: "<<endl;
    stream>>intaux;
    s.setHighestCourse(intaux);

    cout<<"\nIntroduce TEAM NUMBER: "<<endl;
    stream>>intaux;
    s.setTeamNumber(intaux);

    cout<<"\nIntroduce ROLE (0 = member, non-0 = leader): "<<endl;
    stream>>intaux;
    s.setIsLeader(intaux);
  
  }
};

class StudentBin{
private:
  char name_[32], surname_[32], dni_[32], address_[32], birthDate_[32], email_[32];
  int phoneNumber_;
  int highestCourse_;
  int teamNumber_;
  bool isLeader_;
public:
  StudentBin(const Student &s);
  friend class Student;
  char* getDNI()  {return dni_;}
};
#endif
