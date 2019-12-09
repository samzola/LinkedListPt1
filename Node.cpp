//imports
#include <iostream>
#include "Node.h"
#include "Student.h"

using namespace std;

Node::Node(Student*) { //constructor, creates node with student
  student = NULL; //set student to null
  next = NULL; //set next node to null
}

Node::~Node() { //destructor
  delete &student; //deletes student
  next = NULL; ///sets next node to null
}

void Node::setStudent(Student* newstudent) { //set student
  student = newstudent; //sets the student to the input
}

Student* Node::getStudent() { //returns student
  return student;
}

void Node::setNext(Node* newnext) { //gets next node
  next = newnext; //set next node to inputted node
}

Node* Node::getNext() { //returns next node
  return next;
}


