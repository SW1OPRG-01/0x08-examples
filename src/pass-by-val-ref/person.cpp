#include "person.h"

Person::Person(string first, string last, int year, int month, int day) : firstName(first), lastName(last), year(year), month(month), day(day) { }

int Person::getYear() {
  return year;
}

int Person::getMonth() { 
  return month;
}

int Person::getDay() {
  return day;
}

string Person::getFirstName() {
  return firstName;
}

string Person::getLastName() {
  return lastName;
}

void Person::setFirstName(string name) { 
  firstName = name;
}

void Person::setLastName(string name) { 
  lastName = name;
}

string Person::getFullName() {
  return firstName + " " + lastName;
}

string Person::getDateOfBirth() {
  return to_string(year) + "-" + to_string(month) + "-" +to_string(day);
}