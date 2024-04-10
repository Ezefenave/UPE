#include <stdio.h>

int main() {
    int num;
    do {
        printf("Ingrese un numero de 1 a 10: ");
        scanf("%d", &num);
    } while (num < 1 || num > 10);

    return 0;
}