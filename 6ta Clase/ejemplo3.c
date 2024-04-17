/*
Realizar un programa que permita ingresar valores enteros positivos, finalizando la carga con un numero negativo. Informar el maximo y minimo valor ingresado.
*/

#include <stdio.h>

int main(){

    int valor = 0;
    int maximo = 0;
    int minimo = 0;

    printf("Welcome to my program\n");

    printf("Ingrese un valor(Ingrese un valor negativo para salir): ");
    scanf("%d",&valor);

    while (valor > 0)
    {
        printf("El valor ingresado es de %d\n", valor); 
        if(valor > maximo){
            maximo = valor; 
        }else if( valor < minimo){
            minimo = valor;
        }
        
        printf("Ingrese un valor(Ingrese un valor negativo para salir): ");
        scanf("%d",&valor);
    }

    printf("\nEl valor maximo ingresado es igual a: %d", maximo);
    printf("\nEl valor minimo ingresado es igual a: %d", minimo);

    return 0;
}