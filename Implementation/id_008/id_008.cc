// ID_008: Add Teacher

#include <iostream>
#include <fstream>
#include "id_008.h"
#include "../classes/teacher.h"
using std::cin;
using std::cout;
using std::ofstream;

void addTeacher(bool coordinator){
    Teacher t("", "", "", "", "");
    cout << "Introduce the Teacher's data\n";
    cin >> t;
    cout << "2\n";
    t.setCoordinator(coordinator);
    ofstream f("teachers.txt", std::ios::out|std::ios::app);
    f << t;
    f.close();
}
