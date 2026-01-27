#include <stdio.h>

union miUnion {
    int miNumero;
    char miChar;
    char miString[30];
};

int main(void) {
    union miUnion u1;
    //Todos los miembros de una union tienen la misma memoria
    //Cambiar uno los cambia a todos (sus valores)
    u1.miNumero = 1000;
    u1.miChar = 'B';

    printf("%d\n", u1.miNumero); //Esto devuelve algo raro porque se ha sobreescrito con B
    printf("%c\n", u1.miChar);

    return 0;
}