/*
Realizar un programa que permita ingresar valores enteros positivos, finalizando la carga con un numero negativo. Informar el maximo y minimo valor ingresado.
*/

#include <stdio.h>

int main(){

    int valor = 0;
    int maximo = 0;
    int minimo = 0;
    int esPrimerValor = 1;
    int contador = 0;
    int acumulador = 0;
    float promedio = 0;

    printf("Welcome to my program\n");

    printf("Ingrese un valor(Ingrese un valor negativo para salir): ");
    scanf("%d",&valor);
    
    while (valor > 0){
        contador ++;
        acumulador = acumulador + valor;

        printf("El valor ingresado es de %d\n", valor); 

        if(esPrimerValor==1){
            maximo = valor;
            minimo = valor;
            printf("\nSe guardo el primer valor igual a: %d\n", valor);
            esPrimerValor = 0;
        }

        if(valor > maximo){
            maximo = valor; 
        }else if( valor < minimo){
            minimo = valor;
        }

        printf("Ingrese un valor(Ingrese un valor negativo para salir): ");
        scanf("%d",&valor);
    }
            promedio = acumulador / contador;

    printf("\nEl valor maximo ingresado es igual a: %d", maximo);
    printf("\nEl valor minimo ingresado es igual a: %d", minimo);
    printf("\nLa cantidad de valores ingresados es igual a: %d", contador);
    printf("\nEl promedio de valores ingresados es igual a: %.2f",promedio);

    return 0;
}