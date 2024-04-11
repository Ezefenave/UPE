#include <stdio.h>

int main(){
    int contador = 0;
    int edad;

    

    do{
        printf("Ingrese su edad:" );
        scanf("%d", &edad);
        if (edad >= 18){
            contador++;
        }
    }
    while (edad != -1 );
    printf("La cantidad de personas mayores de edad es: %d", contador);
    

    return 0;

}