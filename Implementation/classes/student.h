#ifndef STUDENT_H
#define STUDENT_H value

#include <string>
#include <cstring>
#include "person.h"
#include <fstream>
using std::string;
using std::ofstream;

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
