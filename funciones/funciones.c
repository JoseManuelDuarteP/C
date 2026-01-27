#include <stdio.h>

void hola();
void sumar(int x, int y);
void verArray(int array[], int lenght);
int suma(int x, int y);

int main(void) {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int resultados[5] = {};

    hola();
    sumar(1, 2);
    verArray(array, sizeof(array) / sizeof(array[0]));

    resultados[0] = suma(1, 2);
    resultados[1] = suma(1, 5);
    resultados[2] = suma(1, 10);
    resultados[3] = suma(1, 20);
    resultados[4] = suma(1, 30);
    verArray(resultados, sizeof(resultados) / sizeof(resultados[0]));

    return 0;
}

void hola(void) {
    printf("Hola\n");
}

void sumar(int x, int y) {
    printf("Suma: %d\n", x+y);
}

void verArray(int array[], int lenght) {

    for (int i = 0; i < lenght; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int suma(int x, int y) {
    return x + y;
}