#include <stdio.h>

struct Coche {
    char marca[20];
    int anyo;
};
//Hace falta usar punteros porque si no la función crea una copia
//y los cambios se aplican ahí.
void incrementarAnyo(struct Coche *c);

int main(void) {
    struct Coche c = {"Toyota", 2020};
    struct Coche *p = &c;

    printf("Marca: %s\n", p->marca);
    printf("Year: %d\n", p->anyo);

    incrementarAnyo(&c);
    printf("Marca: %s\n", p->marca);
    printf("Year: %d\n", p->anyo);

    return 0;
}

void incrementarAnyo(struct Coche *c) {
    c->anyo++;
}