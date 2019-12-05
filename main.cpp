#include <iostream>
#include "Node.h"
#include "Student.h"

using namespace std;

void add();
void print(Node* next);

Node* head = NULL;

int main() {
  bool running = true;
  char* command = new char[10];
  //char* name = new char[30];
  while (running == true) {
    cout << endl << "Please enter a command (add, print, or quit)" << endl;
    cin.getline(command, 30, '\n');
    if (strcmp(command, "add") == 0) {
      add();
    }
    else if (strcmp(command, "print") == 0) {
      print(head);
    }
    else if (strcmp(command, "quit") == 0) {
      running = false;
    }
  }
}

void add() {
  char* name = new char[30];
  cout << "Please enter the student's name." << endl;
  cin.getline(name, 30, '\n');
  Student* newStudent = new Student(name);
  Node* current = head;
  if (current == NULL) {
    head = new Node(newStudent);
    head->setStudent(newStudent);
  }
  else {
    while (current->getNext() != NULL) {
      current = current->getNext();
    }
    current->setNext(new Node(newStudent));
    current->getNext()->setStudent(newStudent);
  }
}

void print(Node* next) {
  if (next == head) {
    cout << "list: ";
  }
  if (next != NULL) {
    if (next->getNext() != NULL) {
      cout << next->getStudent()->getName() << ", "; 
    }
    else if (next->getNext() == NULL) {
      cout << next->getStudent()->getName() << " ";
    }
    print(next->getNext());
  }
}
