#include <stddef.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
  char as_sequence[] = "This is a string";
  char *as_pointer = "This is a string";

  char *strings[2];
  strings[0] = as_sequence;
  strings[1] = as_pointer;

  for(size_t i = 0; i < sizeof(strings) / sizeof(char**); i++) {
    printf("%p %s\n", strings[i], strings[i]);
  }

  return 0;
}