#include "integer.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  
  Integer i1;
  i1.setInteger(1);
  cout << hex << &i1 << endl;

  return 0;
}