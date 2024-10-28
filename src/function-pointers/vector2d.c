#include "vector2d.h"
#include <stdio.h>
// Function to initialize a Point struct
Point init(int x, int y, calculate calc) {
    Point p;
    p.x = x;
    p.y = y;
    p.display = print;  // Default display function
    p.calculate = calc; // Set calculate function pointer
    return p;
}

// Display function
void print(Point *p) {
    printf("Point(%d, %d)\n", p->x, p->y);
}
