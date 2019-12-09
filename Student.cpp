//imports
#include <iostream>
#include <cstring>
#include "Student.h"

Student::Student(const char* setName) { //constructor with student name
  strcpy(name, setName); //set name to inputted name
}

Student::~Student() { //destructor
  delete name; //delete student's name
}

char* Student::getName() { //returns student's name
  return name;
}

void Student::setName(char* newname) { //set name
  strcpy(name, newname); //set name to inputted name
}
