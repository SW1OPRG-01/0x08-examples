#include <stdio.h>

int main(int argc, char* argv[]) {

  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
  for(int i = 0; i < 8; ++i) {
    printf("%p sizeof %lu\n", &arr[i], sizeof(arr[i]));
  }

  return 0;
}