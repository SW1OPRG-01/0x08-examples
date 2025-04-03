#include <stdio.h>
#include <string.h>

int main() {
  char *code_oprg = "SW1PRG-01";
  char *code_msys = "SW1MSYS-01";

  int result = strcmp(code_oprg, code_msys);
  printf("%d\n ", result);
  
  result = strcmp(code_msys, code_oprg);
  printf("%d\n ", result);

  return 0;
}
