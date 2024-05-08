//Funcion multiplicar

#include <stdio.h>

int multiplicar(int, int);

int main() {
    int numero1, numero2;
    int totalMultiplicacion;

    printf("Ingrese el primer numero que desea multiplicar: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo numero que desea multiplicar: ");
    scanf("%d", &numero2);

    totalMultiplicacion = multiplicar(numero1, numero2);

    printf("El resultado de la multiplicacion es: %d\n", totalMultiplicacion);

    return 0;
}

int multiplicar(int num1, int num2) {
    int resultadoMulti = num1 * num2;
    return resultadoMulti;
}