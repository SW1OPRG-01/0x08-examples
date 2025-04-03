#include <stdio.h>
#include <string.h>

int main() {
  char *course = "OPRG";
  char suffix[] = "-01";

  char concatenated[11] = { 0 };
  
  strcat(concatenated, "SW1");
  strcat(concatenated, course);
  strcat(concatenated, suffix);
  
  printf("%p %s\n", &concatenated, concatenated);
  return 0;
}