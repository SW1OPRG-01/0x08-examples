#include "vector2d.h"
#include <stdio.h>

Vector2D init(int x, int y, calculate calc) {
    Vector2D p;
    p.x = x;
    p.y = y;
    p.display = print;  
    p.calculate = calc; 
    return p;
}

void print(Vector2D *p) {
    printf("Vector2D(%d, %d)\n", p->x, p->y);
}
