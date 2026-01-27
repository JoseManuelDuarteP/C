//
// El padding son unos bytes extra que se añaden entre atributos de una estructura/unión
// Esto se hace para que el procesador ejecute las órdenes más ŕapidamente
//
#include <stdio.h>

struct Example {
    char a; // 1 byte
    int b;  // 4 bytes
    char c; // 1 byte
};

struct Example2 {
    int b;  // 4 bytes
    char a; // 1 byte
    char c; // 1 byte
};

int main(void) {
    printf("Size of struct: %zu bytes\n", sizeof(struct Example)); //Pero la suma es 12 bytes!!!
    // ¿Por qué? Por el padding. Porque añade primero 3 bytes entre a y b para que b empiece como múltiplo de 4
    // para aumentar la eficiencia. Y añade otros 3 al final después de c por la misma razón.

    printf("Size of struct: %zu bytes\n", sizeof(struct Example2));
    // Sin embargo, aquí la suma es de 8 bytes por el órden de los elementos, ya que hace falta menos padding
    // Solo 2 al final para que sea múltiplo de 4.

    // Las unions no tienen este problema, ya que como los elementos comparten memoria, el espacio total será
    // el tamaño del elemento más grande.
    return 0;
}
