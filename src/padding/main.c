#include <stdio.h>

typedef struct {
  int year;
  int month;
  int day;
  double price;
} Date;

int main(int argc, char* argv[]) {

  Date stock = {2024, 10, 16, 784.80};

  printf("\"year\"\t %p sizeof %lu\n", &stock.year, sizeof(stock.year));
  printf("\"month\"\t %p sizeof %lu\n", &stock.month, sizeof(stock.month));
  printf("\"day\"\t %p sizeof %lu\n", &stock.day, sizeof(stock.day));
  printf("\"price\"\t %p sizeof %lu\n", &stock.price, sizeof(stock.price));

  return 0;
}