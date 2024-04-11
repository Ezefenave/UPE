#include <stdio.h>

int main(){
    int numero = 0;
    int acumulador = 0;
    int contador = 0;
    int promedio;

    for (int i= 0; i < 5; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        if(numero > 0 ){

        acumulador = acumulador + numero;
        printf("El valor incrementado es: %d\n", acumulador); 
        contador++;
        }  
        else{
            printf("El valor ingresado es negativo, ingrese un numero valido\n");
        }
    }
    promedio = acumulador/contador;
    printf("El valor promedio de los numeros ingresados es de: %d\n", promedio); 
    return 0;
}