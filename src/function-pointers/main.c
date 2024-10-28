#include "vector2d.h"

void multiply(Vector2D *p, int x, int y) {
  p->x *= x;
  p->y *= y;
}

void add(Vector2D *p, int x, int y) {
  p->x += x;
  p->y += y;
}

int main() {

  Vector2D p1 = init(0, 0, add);
  Vector2D p2 = {2, 2, print, multiply};

  p1.calculate(&p1, 2, 2);
  p2.calculate(&p2, 4, 4);
  p1.display(&p1);
  p2.display(&p2);

  return 0;
}