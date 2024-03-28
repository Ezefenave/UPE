#include <stdio.h>

int main() {
    int numero;
    int modulo;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    modulo = numero % 2;

    if (modulo != 0) {
        printf("El numero es impar");
    } else {
        printf("El numero es par");
    }

    return 0;
}