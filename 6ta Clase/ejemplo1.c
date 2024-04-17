#include <stdio.h>

int main(){

    int entero = 0;
    int contadorMayor = 0;
    int contadorMenor = 0;
    int acumuladorMayor = 0;
    int acumuladorMenor = 0;
    int promedioMayores = 0;
    int promedioMenores = 0;

    printf("Welcome to my programa\n");

    printf("Ingrese una edad(Ingrese un valor negativo para salir): ");
    scanf("%d",&entero);

    while (entero > 0 ){
        if (entero >= 18){
        printf("El valor %d es mayor \n",entero);
            contadorMayor++;
            acumuladorMayor = acumuladorMayor + entero;
            promedioMayores = acumuladorMayor / contadorMayor;
        }   
        else {
            printf("El valor %d es menor \n",entero);
            contadorMenor++;
            acumuladorMenor = acumuladorMenor + entero;
            promedioMenores = acumuladorMenor / contadorMenor;
        }
        printf("\nIngrese un valor(Ingrese un valor negativo para salir): ");
        scanf("%d",&entero);
    }
        printf("\n----------------------------------------------------------\n");
        printf("La cantidad de personas mayores que ingresaron fueron: %d\n",contadorMayor);
        printf("La cantidad de personas menores que ingresaron fueron: %d\n",contadorMenor);
        printf("\n----------------------------------------------------------\n");
        printf("La suma de las edades las personas mayores es igual a:  %d\n",contadorMayor);
        printf("La suma de las edades personas menores es igual a:  %d\n",contadorMayor);
        printf("\n----------------------------------------------------------\n");
        printf("El promedio de edad de las personas mayores es igual a:  %d\n",promedioMayores);
        printf("El promedio de edad de las personas menores es igual a:  %d\n",promedioMenores);
    
    return 0;
}