#include <stdio.h>

int main(){
    int numero = 0;
    int acumulador = 0;
    int contador = 0;
    int promedio;

    for (int i= 0; i < 5; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        acumulador = acumulador + numero;
        printf("El valor incrementado es: %d\n", acumulador); 
        contador++;
    }
    promedio = acumulador/contador;
    printf("El valor promedio de los numeros ingresados es de: %d\n", promedio); 
    return 0;
}