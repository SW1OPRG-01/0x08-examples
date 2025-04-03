#include <stdio.h>

int main() {

    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    printf("Initial position: %d\n", *ptr);

    ptr++;
    printf("After ptr++: %d\n", *ptr);

    ptr += 2;
    printf("After ptr += 2: %d\n", *ptr);

    ptr--;
    printf("After ptr--: %d\n", *ptr);

    int distance = &arr[4] - &arr[0];
    printf("Distance between arr[4] and arr[0]: %d\n", distance);

    return 0;
}