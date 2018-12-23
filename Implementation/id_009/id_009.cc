// ID_009: Delete Teacher

#include "id_009.h"
#include "../classes/teacher.h"
#include <list>
#include <iostream>
#include <fstream>
using std::cin;
using std::cout;
using std::fstream;
using std::list;

bool deleteTeacher(){
    string dni;
    ifstream f;
    bool to_return = false;
    list<Teacher> lst;
    Teacher aux("", "", "", "", "");
    cout << "DNI of teacher to delete:\n";
    cin >> dni;
    f.open("teachers.txt", std::ios::in);
    ofstream fo;
    while(!f.eof()){
        f >> aux;
        lst.push_back(aux);
    }
    f.close();
    for(list<Teacher>::iterator it = lst.begin(); it != lst.end(); ++it){
        if(it->getDNI() == dni){
            lst.erase(it);
            to_return = true;
            break;
        }
    }
    if(to_return){
        fo.open("teachers.txt", std::ios::out);
        for(list<Teacher>::iterator it = lst.begin(); it != lst.end(); ++it){
            fo << *it;
        }
        f.close();
    }
    return to_return;
}