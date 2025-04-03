#include <iostream>
#include <string>
#include "person.h"

using namespace std;

void changeName(Person person, string firstName);
void changeName(Person *person, string lastName);

int main(int argc, char* argv[]) {
  Person wormtail = Person("Wormtail", "", 1960, 0, 0);  
  changeName(wormtail, "Peter");  
  changeName(&wormtail, "Pettigrew");
  cout << wormtail.getFullName() << endl;
  return 0;
}

void changeName(Person *person, string lastName) {
  person->setLastName(lastName);
}

void changeName(Person person, string firstName) {
  person.setFirstName(firstName);
}