#include <stdio.h>

int main(){
    int numero;
    int contador;

    for (int i= 0; i <5; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
    }
    contador = numero + numero + numero + numero + numero;
    printf("El numero es: %d", contador);

    return 0;
}