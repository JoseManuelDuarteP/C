#include <stdio.h>

int main(void) {
    int num;
    char ch;
    char nombre[30];

    printf("Pon algo: ");
    scanf("%d %c", &num, &ch);
    printf("Numero: %d%c", num, ch);

    printf("\nNombre: ");
    scanf("%s", nombre);
    printf("Nombre: %s", nombre);

    int c;
    while (c = getchar() != '\n' && c != EOF);

    printf("\nNombre completo: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Nombre completo: %s", nombre);

    return 0;
}