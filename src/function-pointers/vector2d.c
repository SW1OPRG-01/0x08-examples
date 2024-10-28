#include "vector2d.h"
#include <stdio.h>
// Function to initialize a Vector2D struct
Vector2D init(int x, int y, calculate calc) {
    Vector2D p;
    p.x = x;
    p.y = y;
    p.display = print;  // Default display function
    p.calculate = calc; // Set calculate function pointer
    return p;
}

// Display function
void print(Vector2D *p) {
    printf("Vector2D(%d, %d)\n", p->x, p->y);
}
