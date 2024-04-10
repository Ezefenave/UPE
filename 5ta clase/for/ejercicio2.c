#include <stdio.h>

int main(){
    int numero = 0;
    int acumulador = 0;

    for (int i= 0; i < 5; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        
        acumulador = acumulador + numero;
        printf("El valor incrementado es: %d\n", acumulador); 
    }
    return 0;
}