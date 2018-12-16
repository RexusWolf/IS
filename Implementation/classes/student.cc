#include "student.h"

Student::Student(const string &name, const string &surname, const string &dni,
  const string &address , const string &birthDate,
  const string &email, const int phoneNumber, const int highestCourse,
  const int teamNumber, const bool isLeader):
  Person(name, surname, dni, address, birthDate, email, phoneNumber){
    highestCourse_ = highestCourse;
    teamNumber_ = teamNumber;
    isLeader_ = isLeader;
}

Student::Student(const StudentBin& sb):
Person(string(sb.name_), string(sb.surname_), string(sb.dni_),
string(sb.address_), string(sb.birthDate_), string(sb.email_), sb.phoneNumber_){
  this->highestCourse_ = sb.highestCourse_;
  this->teamNumber_ = sb.teamNumber_;
  this->isLeader_ = sb.isLeader_;
}

StudentBin::StudentBin(const Student &s){
  strcpy(name_, s.getName().c_str());
  strcpy(surname_, s.getSurname().c_str());
  strcpy(dni_, s.getDNI().c_str());
  strcpy(address_, s.getAddress().c_str());
  strcpy(birthDate_, s.getBirthDate().c_str());
  strcpy(email_, s.getEmail().c_str());
  phoneNumber_ = s.getPhoneNumber();
  highestCourse_ = s.getHighestCourse();
  teamNumber_ = s.getTeamNumber();
  isLeader_ = s.getIsLeader();
}
