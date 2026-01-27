#include <stdio.h>

int add(int a, int b);

int main(void) {
    int (*ptr)(int, int) = add;

    printf("Resultado: %d\n", ptr(5, 6));

    return 0;
}

int add(int a, int b) {
    return a + b;
}