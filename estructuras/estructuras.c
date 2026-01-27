#include <stdbool.h>
#include <stdio.h>
#include <string.h>

struct persona {
    char nombre[50];
    int edad;
    bool esMenor;
};

int main(void) {
    struct persona p;
    strcpy(p.nombre, "Pedro");
    p.edad = 17;
    p.esMenor = true;

    printf("Nombre completo: %s\n", p.nombre);
    printf("Edad completo: %d\n", p.edad);
    printf("Menor de edad: %d\n\n", p.esMenor);

    struct persona p2 = {"Paco", 28, false};
    printf("Nombre completo: %s\n", p2.nombre);
    printf("Edad completo: %d\n", p2.edad);
    printf("Menor de edad: %d\n\n", p2.esMenor);

    return 0;
}