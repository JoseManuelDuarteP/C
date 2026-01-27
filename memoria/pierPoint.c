#include <stdio.h>

int main(void) {
    int myNum = 10; // Normal variable
    int* ptr = &myNum; // Pointer to int
    int** pptr = &ptr; // Pointer to pointer

    printf("myNum = %d\n", myNum);
    printf("ptr = %d\n", *ptr);
    printf("pptr = %d\n", **pptr);

    **pptr = 20;

    printf("myNum = %d\n", myNum);

    return 0;
}