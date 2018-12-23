// ID_010: Login

#include "id_010.h"
#include "../classes/teacher.h"
#include "../libs/getpass.h"
#include "../libs/sha256.h"
#include <string>
#include <fstream>
#include <iostream>
#include <list>
using std::cout;
using std::cin;
using std::ofstream;
using std::ifstream;
using std::string;
using std::list;
using picosha2::hash256_hex_string;

bool login(bool &isCoord){
    string username, passwd;
    Teacher aux("", "", "", "", "");
    list<Teacher> lst;
    ifstream f;
    bool to_return = false;
    
    cout << "Username:  ";
    cin >> username;
    cout << "\nPassword:  ";
    passwd = mygetpass();
    passwd = hash256_hex_string(passwd);

    f.open("teachers.txt", std::ios::in);

    while(!f.eof()){
        f >> aux;
        lst.push_back(aux);
    }

    f.close();

    for(list<Teacher>::iterator it = lst.begin(); it != lst.end(); ++it){
        if( (it->getUsername() == username) && (it->getEncPassword() == passwd) ){
            to_return = true;
            isCoord = it->getIsCoordinator();
            break;
        }
    }
    
    return to_return;
}