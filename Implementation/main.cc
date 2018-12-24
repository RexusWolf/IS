#include <iostream>
#include <fstream>
#include <list>
#include "classes/student.h"
#include "classes/teacher.h"
#include "id_000/id_000.h"
#include "id_001/id_001.h"
#include "id_002/id_002a.h"
#include "id_002/id_002b.h"
#include "id_003/id_003.h"
#include "id_004/id_004.h"
#include "id_005/id_005.h"
#include "id_006/id_006.h"
#include "id_007/id_007.h"
#include "id_008/id_008.h"
#include "id_009/id_009.h"
#include "id_010/id_010.h"

using std::cout;
using std::cin;

int main(){
    std::ifstream f("teachers.txt");
    std::ifstream sf("students.bin", std::ios::binary);
    bool isCoord;
    int opt = 0;
    Student aux("", "", "");
    if ( (!f.is_open()) || (f.peek() == std::ifstream::traits_type::eof())) {
        if(f.is_open()){
          f.close();
        }
        cout << "You are the first user, so you are assigned coordinator.\n";
        cout << "Please introduce your data.\n";
        addTeacher(true);
    }
    else{
      f.close();
    }
    std::list<Student> students;
    if(!sf.is_open()){
      sf.close();
      ofstream auxf("students.bin");
      auxf.close();
      sf.open("students.bin");
    }
    while(!sf.eof()){
      sf.read((char*)&aux, sizeof(StudentBin));
      Student a(aux);
      students.push_back(a);
    }
    sf.close();

    while(!login(isCoord)){
        cout << "Invalid credentials\n";
    }

    std::string coordMenu = "6.Import Data\n7.Save Backup\n8.Add assistant\n9.Delete Assistant\n";
    std::string subMenu = isCoord?(coordMenu):("");
    std::string menu = "1.Add Student\n2.Delete Student\n3.Clean Database\n4.Modify Student\n5.Show all Students\n";
    menu += subMenu;
    menu +=  "0.Exit\n";
    cout << menu;
    cin >> opt;
    while( opt != 0 ){
        switch(opt){
            case 1:{
                cin.ignore();
                cin >> aux;
                insertStudent(aux, students);
            }break;
            case 2:{
                deleteStudent(students);
            }break;
            case 3:{
                deleteAll(students);
            }break;
            case 4:{
                modifyStudent(students);
            }break;
            case 5:{
                showStudents(students);
            }
            case 6:{
                if(isCoord){
                    students = importData();
                    break;
                }
            }
            case 7:{
                if(isCoord){
                    saveData(students);
                    break;
                }
            }
            case 8:{
                if(isCoord){
                    addTeacher();
                    break;
                }
            }
            case 9:{
                if(isCoord){
                    deleteTeacher();
                    break;
                }
            }
            default:{
                cout << "Invalid Option\n";
            }

        }
        cout << menu;
        cin >> opt;
    }
    ofstream dump("students.bin", std::ios::out);
    for(list<Student>::iterator it = students.begin(); it != students.end(); ++it){
      StudentBin aux(*it);
      dump.write((char*)&aux, sizeof(StudentBin));
    }
}
