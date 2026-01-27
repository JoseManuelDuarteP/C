#include <stdio.h>

struct Propietario {
    char nombre[40];
    int edad;
};

struct Coche {
    char marca[20];
    char modelo[30];
    char color[20];
    struct Propietario propietario;
};

int main(void) {
    struct Propietario p = {"Juan Magan", 34};
    struct Coche c = {"BMW", "X3", "Azul Mar", p};

    printf("Dueño:\n"
           "\t Nombre: %s\n"
           "\t Edad: %d\n", p.nombre, p.edad);

    printf("Coche:\n"
           "\t Marca: %s\n"
           "\t Modelo: %s\n"
           "\t Color: %s\n"
           "\t Propietario: %s", c.marca, c.modelo, c.color, c.propietario.nombre);

    return 0;
}