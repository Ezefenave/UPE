#include <stdio.h>

int main(){

    int entero = 0;
    int contadorMayor = 0;
    int contadorMenor = 0;
    printf("Welcome to my programa\n");

    printf("Ingrese una edad(Ingrese un valor negativo para salir): ");
    scanf("%d",&entero);

    while (entero > 0 ){
        if (entero >= 18){
        printf("El valor %d es mayor \n",entero);
            contadorMayor++;
        }   
        else {
            printf("El valor %d es menor \n",entero);
            contadorMenor++;
        }
        printf("\nIngrese un valor(Ingrese un valor negativo para salir): ");
        scanf("%d",&entero);
    }
        printf("\n----------------------------------------------------------\n");
        printf("La cantidad de personas mayores que ingresaron fueron: %d\n",contadorMayor);
        printf("La cantidad de personas menores que ingresaron fueron: %d\n",contadorMenor);
    
    return 0;
}