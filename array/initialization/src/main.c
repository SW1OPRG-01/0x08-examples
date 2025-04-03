#include <stdio.h>

typedef struct {
  int year;
  int month;
  int day;
} Date;

int main(int argc, char* argv[]) {
  int num_initialized[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };

  int num_uninitialized[32];
  for(size_t i = 0; i < 32; i++) {
    num_uninitialized[i] = 42;
  }
  
  Date dates[2];
  Date exam = { 2024, 12, 18 };
  Date new_year = { 2024, 12, 31 };
  dates[0] = exam;
  dates[1] = new_year;

  return 0;
}