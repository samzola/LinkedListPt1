#include <iostream>
#include <cstring>
#include "Student.h"

Student::Student(const char* setName, int setID) {
  strcpy(name, setName);
  id = setID;
}

Student::~Student() {
  delete name;
}

char* Student::getName() {
  return name;
}

int Student::getID() {
  return id;
}
