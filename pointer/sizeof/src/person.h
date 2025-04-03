#include <string>

#pragma once

using namespace std;

class Person {
  public:
    Person(string first, string last, int year, int month, int day);
    int getYear();
    int getMonth();
    int getDay();
    string getFirstName();
    void setFirstName(string name);
    string getLastName();
    void setLastName(string name);
    string getFullName();
    string getDateOfBirth();
  private:
    Person();
    int year;
    int month;
    int day;
    string firstName;
    string lastName;
};