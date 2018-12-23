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
    std::ifstream sf("students.bin");
    bool isCoord;
    int opt = 0;
    Student aux("", "", "");
    if ( f.peek() == std::ifstream::traits_type::eof() ){
        cout << "You are the first user, so you are assigned coordinator.\n";
        cout << "Please introduce your data";
        addTeacher(true);
    }
    f.close();
    std::list<Student> students;
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
    std::string menu = "1.Add Student\n2.Delete Student\n3.Clean Database\n4.Modify Student\n5.Show all Students\n" + isCoord?"":coordMenu + "0.Exit";
    cout << menu;
    cin >> opt;
    while( opt != 0 ){        
        switch(opt){
            case 1:{
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
    }
}