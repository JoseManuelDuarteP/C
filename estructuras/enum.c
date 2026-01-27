#include <stdio.h>

enum Level {
    LOW = 1,
    MEDIUM,
    HIGH
};

typedef enum {LUN, MAR, MIE, JUE, VIE, SAB, DOM} Day;

int main(void) {
    enum Level level = MEDIUM;
    printf("%d\n", level);

    switch (level) {
        case 1:
            printf("Low Level\n");
            break;
        case 2:
            printf("Medium Level\n");
            break;
        case 3:
            printf("High Level\n");
            break;
    }

    Day hoy = MIE;
    printf("%d\n", hoy);

    return 0;
}