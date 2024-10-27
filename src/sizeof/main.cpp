#include <iostream>
#include "person.h"

int main(int argc, char* argv[]) {
  
  Person harry("Harry", "Potter", 1980, 7, 31);
  Person snape = Person("Severus", "Snape", 1960, 1, 9);

  Person *pHarry = &harry;

  cout << sizeof(harry) << endl;
  cout << sizeof(pHarry) << endl;

  return 0;
}