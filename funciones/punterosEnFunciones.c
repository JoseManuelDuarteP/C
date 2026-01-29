#include <stdio.h>

int add(int a, int b);

void greetMorning();
void greetEvening();
// Esta función tiene como parámetro otra función (puntero de esa función, realmente)
// Hay que ponerle también el tipo que devuelve esa función
void greet(void (*func)());

void suma();
void substracto();
void multiplicacion();

int main(void) {
    int (*ptr)(int, int) = add;

    printf("Resultado: %d\n", ptr(5, 6));

    greet(greetMorning);
    greet(greetEvening);

    // Aquí hemos creado un array de punteros. Si lo recorremos con un for, ejecutaremos
    // las funciones en orden.
    void (*operaciones[])() = {suma, substracto, multiplicacion};
    for (int i = 0; i < sizeof(operaciones) / sizeof(operaciones[0]); i++) {
        operaciones[i]();
    }

    return 0;
}

int add(int a, int b) {
    return a + b;
}

void greetMorning() {
    printf("Good morning!\n");
}

void greetEvening() {
    printf("Good evening!\n");
}

void greet(void (*func)()) {
    func();
}

void suma() {
    printf("Suma!\n");
}

void substracto() {
    printf("Substracto!\n");
}

void multiplicacion() {
    printf("Multiplicación!\n");
}