#ifndef PERSON_H
#define PERSON_H value
  #include <string>
  using std::string;

  class Person{
  private:
    string name_, surname_, dni_, address_, birthDate_, email_;
    int phoneNumber_;
  public:
    inline Person(const string &name, const string &surname, const string &dni,
    const string &address = "", const string &birthDate = "",
    const string &email = "", const int phoneNumber = 0){
    name_ = name; surname_ = surname; dni_ = dni; address_ = address;
    birthDate_ = birthDate; email_ = email; phoneNumber_ = phoneNumber;
    }

    inline string getName() const {return name_;}
    inline void setName(const string &name) {name_ = name;}

    inline string getSurname() const {return surname_;}
    inline void setSurname(const string &surname) {surname_ = surname;}

    inline string getDNI() const {return dni_;}
    inline void setDNI(const string &dni) {dni_ = dni;}

    inline string getAddress() const {return address_;}
    inline void setAddress(const string &address) {address_ = address;}

    inline string getBirthDate() const {return birthDate_;}
    inline void setBirthDate(const string birthDate) {birthDate_ = birthDate;}

    inline int getPhoneNumber() const {return phoneNumber_;}
    inline void setPhoneNumber(const int phoneNumber) {phoneNumber_ = phoneNumber;}

    inline string getEmail() const {return email_;}
    inline void setEmail(const string email) {email_ = email;}
  };



#endif
