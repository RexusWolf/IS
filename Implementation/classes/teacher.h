#ifndef TEACHER_H
#define TEACHER_H value
  #include "person.h"
  #include "../libs/getpass.h"
  #include "../libs/sha256.h"
  #include <string>
  #include <fstream>
  #include <iostream>
  using std::cout;
  using std::string;
  using picosha2::hash256_hex_string;
  using std::ofstream;
  using std::ifstream;
  using std::istream;
  using std::ostream;
  using std::to_string;

  /*
  .########.########....###.....######..##.....##.########.########.
  ....##....##.........##.##...##....##.##.....##.##.......##.....##
  ....##....##........##...##..##.......##.....##.##.......##.....##
  ....##....######...##.....##.##.......#########.######...########.
  ....##....##.......#########.##.......##.....##.##.......##...##..
  ....##....##.......##.....##.##....##.##.....##.##.......##....##.
  ....##....########.##.....##..######..##.....##.########.##.....##
  */

  class Teacher:public Person{
  private:
    string username_;
    string encPassword_; //The password is stored in encripted form. RSA?
    bool isCoordinator_;
  public:
    inline Teacher(const string &name, const string &surname, const string &dni,
    const string &username, const string &encPassword, const string &address = "",
    const string &birthDate = "",  const string &email = "", const int phoneNumber = 0,
    const bool isCoordinator = false):
    Person(name, surname, dni, address, birthDate, email, phoneNumber){
      username_ = username;
      encPassword_ = encPassword;
      isCoordinator_ = isCoordinator;
    }

    /*
    ..######..########.########.......##..######...########.########
    .##....##.##..........##.........##..##....##..##..........##...
    .##.......##..........##........##...##........##..........##...
    ..######..######......##.......##....##...####.######......##...
    .......##.##..........##......##.....##....##..##..........##...
    .##....##.##..........##.....##......##....##..##..........##...
    ..######..########....##....##........######...########....##...
    */

    inline string getUsername() const {return username_;}
    inline void setUsername(const string &username) {username_ = username;}

    inline string getEncPassword() const {return encPassword_;}
    inline void setEncPassword(const string &encPassword) {encPassword_ = encPassword;}

    inline bool getIsCoordinator() const {return isCoordinator_;}
    inline void setCoordinator(const bool isCoordinator) {isCoordinator_ = isCoordinator;}

    /*
    .##........#######...######...####.##....##
    .##.......##.....##.##....##...##..###...##
    .##.......##.....##.##.........##..####..##
    .##.......##.....##.##...####..##..##.##.##
    .##.......##.....##.##....##...##..##..####
    .##.......##.....##.##....##...##..##...###
    .########..#######...######...####.##....##
    */

    inline bool loginAttempt(const string &username, const string &password){
      return( (username == username_) && (hash256_hex_string(password) == encPassword_) );
    }

    /*
    .####.......##..#######.
    ..##.......##..##.....##
    ..##......##...##.....##
    ..##.....##....##.....##
    ..##....##.....##.....##
    ..##...##......##.....##
    .####.##........#######.
    */

    friend ofstream& operator<<(ofstream& stream, const Teacher &t){
      stream << t.getName() << '\n' << t.getSurname() << '\n' << t.getDNI() << '\n';
      stream << t.getAddress() << '\n'<< t.getBirthDate() << '\n';
      stream << t.getUsername() << '\n' << t.getEncPassword() << '\n';
      stream << to_string(t.getPhoneNumber()) << '\n';
      stream << to_string(t.getIsCoordinator()) << '\n';

      return stream;
    }

    friend istream& operator>>(istream& stream, Teacher &t){
      string aux;
      int intaux;

      cout << "Introduce NAME: "<< endl;
      stream >> aux;
      //stream.ignore(99999, '\n');
      t.setName(aux);

      cout<<"\nIntroduce SURNAME: "<<endl;
      stream >> aux;
      //stream.ignore(99999, '\n');
      t.setSurname(aux);

      cout<<"\nIntroduce DNI: "<<endl;
      stream >> aux;
      //stream.ignore(99999, '\n');
      t.setDNI(aux);

      cout<<"\nIntroduce ADDRESS: "<<endl;
      stream >> aux;
      //stream.ignore(99999, '\n');
      t.setAddress(aux);

      cout<<"\nIntroduce EMAIL: "<<endl;
      stream >> aux;
      //stream.ignore(99999, '\n');
      t.setEmail(aux);

      cout<<"\nIntroduce BIRTH DATE: "<<endl;
      stream >> aux;
      //stream.ignore(99999, '\n');
      t.setBirthDate(aux);

      cout<<"\nIntroduce PHONE NUMBER: "<<endl;
      stream>>intaux;
      t.setPhoneNumber(intaux);

      cout << "\nIntroduce USERNAME: "<<endl;
      stream >> aux;
      t.setUsername(aux);

      cout<<"\nIntroduce PASSWORD: "<<endl;
      stream >> aux;
      aux = hash256_hex_string(aux);
      t.setEncPassword(aux);

      cout<<"\nIntroduce ROLE (0 = assistant, non-0 = coordinator): "<<endl;
      stream>>intaux;
      t.setIsLeader(intaux);

      return stream;
    }

    friend ifstream& operator>>(ifstream& stream, Teacher &t){
      string aux;
      getline(stream, aux);
      t.setName(aux);
      getline(stream, aux);
      t.setSurname(aux);
      getline(stream, aux);
      t.setDNI(aux);
      getline(stream, aux);
      t.setAddress(aux);
      getline(stream, aux);
      t.setBirthDate(aux);
      getline(stream, aux);
      t.setUsername(aux);
      getline(stream, aux);
      t.setEncPassword(aux);
      getline(stream, aux);
      t.setPhoneNumber(std::stoi(aux));
      aux = getpass();
      t.setIsCoordinator(std::stoi(aux));
    }
  };
#endif
