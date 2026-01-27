#include <stdio.h>

int main(void) {
    int anyos = 27;
    int* pun = &anyos;

    printf("%d\n", anyos);
    printf("%p\n", &anyos);
    printf("%p\n", pun);
    printf("%d\n", *pun);

    return 0;
}