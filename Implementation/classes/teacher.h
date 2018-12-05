#ifndef TEACHER_H
#define TEACHER_H value
  #include "person.h"
  #include "../sha256.h"
  #include <string>
  using std::string
  using picosha2::hash256_hex_string

  class Teacher:public Person{
  private:
    string username_;
    string encPassword_; //The password is stored in encripted form. RSA?
    bool isCoordinator_;
  public:
    inline Teacher(const string &username, const string &encPassword,
    const string &name, const string &surname, const string &dni,
    const string &address = "", consr string &birthDate, const int phoneNumber,
    const bool isCoordinator = false):
    Persona(name, surname, dni, address, birthDate, phoneNumber){
      username_ = username;
      encPassword_ = encPassword;
      isCoordinator_ = isCoordinator;
    }

    inline string getUsername() const {return username_;}
    inline void setUsername(const string &username) {username_ = username;}

    inline void getEncPassword() const {return encPassword_;}
    inline string setEncPassword(string encPassword) {encPassword_ = encPassword;}

    inline bool checkCoordinator() const {return isCoordinator_;}
    inline void setCoordinator(const bool isCoordinator) {isCoordinator_ = isCoordinator;}

    inline bool loginAttempt(const string &username, const string &password){
      return( (username == username_) && (hash256_hex_string(password) == encPassword_)
    }
  }
#endif
