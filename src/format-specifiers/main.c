#include <stdio.h>

int main(int argc, char* argv[]) {
  
  int i = -1;
  char* message = "Enter an integer: ";
  printf("%s", message);
  scanf("%d", &i);
  printf("You've entered %d\n", i);
  printf("%d is %x in hex and located at %p in memory\n", i, i, &i);

  return 0;
}