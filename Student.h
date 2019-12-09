//define
#ifndef STUDENT_H
#define STUDENT_H
//imports
#include <iostream>
#include <cstring>

using namespace std;

class Student { //student class
 public:
  Student(const char*); //constructor with name
  ~Student(); //destructor
  char* getName(); //returns name of student
  void setName(char* newname); //set name of student
 private:
  char* name = new char[50]; //name of student
};

#endif
