#ifndef VECTOR2D_H
#define VECTOR2D_H 

typedef struct Point Point;

typedef void (*display)(Point*);  
typedef void (*calculate)(Point*, int x, int y);

struct Point {
  int x;
  int y;
  display display;
  calculate calculate;
};

Point init(int, int, calculate);
void print(Point*);

#endif