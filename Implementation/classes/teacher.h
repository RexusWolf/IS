#ifndef TEACHER_H
#define TEACHER_H value
  #include "person.h"
  #include "../libs/sha256.h"
  #include <string>
  using std::string
  using picosha2::hash256_hex_string

  class Teacher:public Person{
  private:
    string username_;
    string encPassword_; //The password is stored in encripted form. RSA?
    bool isCoordinator_;
  public:
    inline Teacher(const string &name, const string &surname, const string &dni,
    const string &address = "", const string &birthDate, const string &username,
    const string &encPassword,const int phoneNumber,
    const bool isCoordinator = false):
    Person(name, surname, dni, address, birthDate, phoneNumber){
      username_ = username;
      encPassword_ = encPassword;
      isCoordinator_ = isCoordinator;
    }

    inline string getUsername() const {return username_;}
    inline void setUsername(const string &username) {username_ = username;}

    inline void getEncPassword() const {return encPassword_;}
    inline string setEncPassword(const string &encPassword) {encPassword_ = encPassword;}

    inline bool getIsCoordinator() const {return isCoordinator_;}
    inline void setCoordinator(const bool isCoordinator) {isCoordinator_ = isCoordinator;}

    inline bool loginAttempt(const string &username, const string &password){
      return( (username == username_) && (hash256_hex_string(password) == encPassword_)
    }

    inline ofstream& operator<<(ofstream& stream, const Teacher &t){
      stream << t.getName() << '\n' << t.getSurname() << '\n' << t.getDNI() << '\n';
      stream << t.getAddress() << "'\n'<< t.getBirthDate() << '\n';
      stream << t.getUsername() << '\n' << t.getEncPassword() << '\n';
      stream << to_string(t.getPhoneNumber()) << '\n';
      stream << to_string(t.getIsLeader()) << '\n'
    }
  };
#endif
