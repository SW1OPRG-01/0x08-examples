#include <stdio.h>
#include <string.h>

int main() {
  char *pGreeting = "Hello, SW1OPRG-01";
  char aGreeting[] = "Hello, SW1OPRG-\01";
  
  int len_p = strlen(pGreeting);
  int len_a = strlen(aGreeting);
  
  printf("%d %d\n", len_a, len_p);
  
  return 0;
}