#include <stdio.h>
#include <string.h>

int main() {
  char *source = "Hello, SW1PRG-01";
  char destination[strlen(source)];

  char *copy = strcpy(destination, source);

  printf("'%s' (%p %p %p)\n", copy, source, copy, destination);
  return 0;
}