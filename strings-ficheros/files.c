#include <stdio.h>


int main(void) {
    FILE *fptr;

    fptr = fopen("archivo.txt", "w");
    fprintf(fptr, "Hola que tal\n");
    fclose(fptr);

    fptr = fopen("archivo.txt", "a");
    fprintf(fptr, "Soy el chico de las poesias\n");
    fclose(fptr);

    fptr = fopen("archivo.txt", "r");
    char texto[1000];
    if (fptr != NULL) {
        while (fgets(texto, 1000, fptr)) {
            printf("%s", texto);
        }
    } else {
        printf("No se puede abrir el archivo\n");
    }

    fclose(fptr);

    return 0;
}
