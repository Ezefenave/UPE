#include <stdio.h>

int main(){
    short numDeDia;

    printf("Ingrese un numero del 1 al 7: ");
    scanf("%hd", &numDeDia);

    switch (numDeDia)
    {
    case 1:
        printf("El dia numero %d corresponde al Domingo", numDeDia);
        break;
    case 2:
        printf("El dia numero %d corresponde al Lunes", numDeDia);
        break;
    case 3:
        printf("El dia numero %d corresponde al Martes", numDeDia);
        break;
    case 4:
        printf("El dia numero %d corresponde al Miercoles", numDeDia);
        break;
    case 5:
        printf("El dia numero %d corresponde al Jueves", numDeDia);
        break;
    case 6:
        printf("El dia numero %d corresponde al Viernes", numDeDia);
        break;
    case 7:
        printf("El dia numero %d corresponde al Sabado", numDeDia);
        break;
    default:
        printf("El numero ingresado es incorrecto");
        break;
    }
    return 0;
}