#ifndef VECTOR2D_H
#define VECTOR2D_H 

typedef struct Vector2D Vector2D;

typedef void (*display)(Vector2D*);  
typedef void (*calculate)(Vector2D*, int x, int y);

struct Vector2D {
  int x;
  int y;
  display display;
  calculate calculate;
};

Vector2D init(int, int, calculate);
void print(Vector2D*);

#endif