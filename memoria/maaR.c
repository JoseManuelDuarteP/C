#include <stdio.h>

int main(void) {
    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int lenght = sizeof(numeros) / sizeof(int);

    for (int i = 0; i < lenght; i++) {
        printf("%p\n", &numeros[i]);
    }

    printf("%d\n", numeros[0]);
    *numeros = 99;
    printf("%d\n", *numeros);

    return 0;
}
