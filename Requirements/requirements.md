# **Software requirements**
## Functional
* Application that manages the student data, and allows the professor to:
  * ### Insert a student: **ID 000**
    #### Required Data:
      * ID
      * Name
      * Surname

    #### Optional Data:
      * Group Number
      * Is leader of group?
      * Phone Number
      * Corporative Email
      * Address
      * Highest Registered Course
      * Birth Date

    #### Constraints:
      * The number of students is limited to 150.
      * A group can't have more than one leader.
      * If any of this would happen, the sytem throws an error and doesn't insert the student.

  * ### Search for a student: **ID 001**
      * By surname (ask for ID if there are more than one)
      * By ID
      * If the student doesn't exist, the system asks for another one or to exit.
  * ### Delete a student: **ID 002a**
      * Search for a student(like in 001) and delete it.
  * ### Delete all students: **ID 002b**
      * Clean the database completely
  * ### Edit a student's data. **ID 003**
      * Search for a student(001), ask for the new data, and override the old data. A group's leader can't be changed this way.
  * ### Edit a group's leader. **ID 004**
  * ### Show all students: **ID 005**
      * The system will generate a Markdown/HTML file that contains the data of all the students.
      * This file can be ordered alphabetically by name or surname, by ID or by highest course, both ascending and descending.
  * ### Import data from backup: **ID 006**
      * The system will load the data from a binary file, like the ones created with the backup.
  * ### Create a backup: **ID 007**
      * Only the coordinator can do it.
      * Creates a binary file containing the data from all the students.

## Non-Functional
  * Written in C++
  * Works in Linux-based systems.
  * Simplicity
  * Optional GUI
