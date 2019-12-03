#include <iostream>
#include "Node.h"
#include "Student.h"

using namespace std;

void add(char* name);
void print(Node* next);

Node* head = NULL;

int main() {
  bool running = true;
  char* command = new char[10];
  char* name = new char[30];
  while (running == true) {
    cout << "Please enter a command (add, print, or quit)" << endl;
    cin.getline(command, 30,  '\n');

    if (strcmp(command, "add") == 0) {
      cout << "Enter the student's name: ";
      cin.getline(name, 30, '\n');
      //add(name);
    }
    else if (strcmp(command, "print") == 0) {
      print(head);
    }
    else if (strcmp(command, "quit") == 0) {
      running = false;
    }
  }
}

void add(char* name) {
  Student* newStudent = new Student(name);
  Node* current = head;
  if (current == NULL) {
    head = new Node(newStudent);
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
    cout << next->getStudent()->getName() << ", " << endl;
    print(next->getNext());
  }
}
