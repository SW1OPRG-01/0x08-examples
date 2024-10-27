#include <iostream>
#include "person.h"

int main(int argc, char* argv[]) {
  
  Person harry("Harry", "Potter", 1980, 7, 31);
  Person snape = Person("Severus", "Snape", 1960, 1, 9);

  Person *pHarry = &harry;

  cout << "Harry object: " << sizeof(harry) << "bytes" << endl;
  cout << "Pointer to Harry object: " << sizeof(pHarry) << "bytes" << endl;

  return 0;
}