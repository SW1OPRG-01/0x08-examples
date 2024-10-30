#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  
  int i = 42;
  int *p_i = &i;

  cout << &i << " " << i << endl;
  cout << &p_i << " " << p_i << " " << *p_i << endl;
  
  return 0;
}