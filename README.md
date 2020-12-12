# Identifying Info
a. Full Name: Michael Masakayan
b. Chapman ID: 2382578
c. Chapman Email: masakayan@chapman.edu
d. Course Number and Section: CPSC 350-03
e. Assignment or Excercise Number: Assignment 5 - Student DB

# list of files
 main.cpp
 DatabaseManager.cpp
 DatabaseManager.hpp
 Faculty.cpp
 Faculty.hpp
 GenBNode.hpp
 GenBST.hpp
 GenStructures.hpp
 Student.cpp
Student.hpp
tester.hpp
 README.md


# errors 
When adding a student and there is no faculty memeber attributed to the list then the program will bug and it will be sent into an "invalid" loop. If this is the case hit crtl + C to exit the program


# A LIST OF ALL REFERENCES USED TO COMPLETE THE ASSIGNMENT, INCLUDING PEERS (IF APPLICABLE)
https://www.geeksforgeeks.org/binary-search-tree-data-structure/
http://www.cplusplus.com/reference/ostream/ostream/
https://www.geeksforgeeks.org/c-stream-classes-structure/
zybooks
https://www.geeksforgeeks.org/binary-tree-data-structure/
Worked and consulted with Jessie Pao of class 350-2 
referenced my previous C++ methods for BST and binary nodes from intro to C++ class taken at PCC
https://www.bogotobogo.com/cplusplus/binarytree.php
https://www.softwaretestinghelp.com/binary-tree-in-cpp/
https://www.tutorialspoint.com/cplusplus-program-to-implement-hash-tables

# INSTRUCTIONS FOR RUNNING THE ASSIGNMENT
Run docker and go to file
type make all
tper ./Assignment_5.exe studentTable.txt facultyTable.txt
use the choices to use functions (make sure you add a faculty member before you add a student or the program will bug)
type in 13 to quit and -1 to do again

