// El callback es cuando se pasa una función a otra función como argumento
#include <stdio.h>

void decirHola();
void ejecutarCallback(void (*callback)());
void sumar(int a, int b);
void calcular(void (*callback)(int, int), int, int);

int main(void) {
    ejecutarCallback(decirHola);
    // La función que se pasa como argumento puede a su vez tener argumentos
    calcular(sumar, 5, 3);

    return 0;
}

void decirHola() {
    printf("Hola desde el callback\n");
}

void ejecutarCallback(void (*callback)()) {
    printf("Antes del callback...\n");
    callback();
    printf("Después del callback.\n");
}

void sumar(int a, int b) {
    printf("La suma es: %d\n", a + b);
}
// La función que se pasa como argumento puede a su vez tener argumentos
void calcular(void (*callback)(int, int), int x, int y) {
    callback(x, y);
}