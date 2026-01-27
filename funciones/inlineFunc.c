#include <stdio.h>
// La palabra inline simplemente sirve para optimizar funciones pequeñas
// Lo que hace es sustituir la llamada a la función por el código directamente
inline int sumar(int a, int b);

int main(void) {
    printf("%d\n", sumar(1, 2)); // Aquí en vez de sumar(1,2) pone "1 + 2"

    return 0;
}

int sumar(int a, int b) {
    return a + b;
}