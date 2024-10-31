#include <stdio.h>

int main(int argc, char* argv[]) {
  
  int i = -1;

  sscanf("%d", &i);
  printf("You've entered %d\n", i);

  return 0;
}