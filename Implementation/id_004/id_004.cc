// ID_004: Modify Team Leader
/*
**Main flow:**
 1. The study case starts when the system needs to modify a student.
 2. The system asks for the team's number.
 3. The system modifies the role of the team's leader.
 4. The system asks the user who will be the team's leader of the team.
 4. The system modifies the new team's leader role.
 5. The system saves the data.

 **Alternative flow:**

  3. a. If the team doesn't have a leader the system does nothing.
  4. a. If the student doesn't exists, the system shows an error message and ask for the student DNI/Surname again.
*/

#include <cstdlib>
#include <iostream>
#include <fstream>

//The fuction update the leader of a group.
int Modify_Team_Leader(){

  student aux;

  //We use a txt file as database, so, let's open .txt
  //Declare an input file stream (ifstream) variable.

  ifstream inFile;

  inFile.open("database.txt");
  //check if the file exist or can be open.
  if (!inFile){
    std::cout << "Not able to open database" << \n;
    //finish the program with an error.
    exit(1);
  }

  int groupnumber;
  std::string new_leader;

  //Insert the number of the group that you want to change the lider.
  std::cout<<"Insert the number of the group that you want to change the lider\n";
  std::cin>>groupnumber;

  while (inFile >> groupnumber) {
    if (groupnumber == student.teamNumber) {
      if(1 == student.role){
        setRole(0);
      }
    }
  }

  std::cout << "Select the Student to become the leader \n";

  //Aqu� me he quedao xd



  inFile.close();
}
