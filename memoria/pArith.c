#include <stdio.h>

int main(void) {
    int myNumbers[4] = {25, 50, 75, 100};
    char letters[] = "Hi";
    int* p = myNumbers;  // Apunta a el primer elemento de myNumbers
    char* c = letters;
    int* primero = &myNumbers[0];
    int* ultimo  = &myNumbers[3];

    printf("%d\n", *p);       // 25
    printf("%d\n", *(p + 1)); // 50
    printf("%d\n", *(p + 2)); // 75
    printf("%d\n", *(p + 3)); // 100

    p++;
    printf("%d\n", *p); // 50
    p--;
    printf("%d\n", *p); // 25

    printf("%ld\n", ultimo - primero); // Saca cuantos elementos hay entre 2 punteros (3 aquí)

    // No todos los punteros se mueven igual. Dependiendo de su tipo, al sumar 1 se mueven hacia
    // delante dependiendo del tamaño de a que apunta.
    // Por ejemplo, aquí el int se moverá de 4 en 4 bytes y el char de 1 en 1
    printf("%p\n", p);
    printf("%p\n", p+1);
    printf("%p\n", p+2);

    printf("%p\n", c);
    printf("%p\n", c+1);

    // Otra manera de recorrer arrays con punteros:
    for (int i = 0; i < 4; i++) {
        printf("%d\n", *p);
        p++;
    }

    return 0;
}