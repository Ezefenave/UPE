#include <stdio.h>

int main(){
    int numero1;
    int numero2;
    int resultado;
    short opcionElegida;

    printf("Ingrese la opcion que desea realizar: \n");
    
    printf("Opcion 1: sumar \n");
    printf("Opcion 2: restar \n");
    printf("Opcion 3: multiplicar \n");
    printf("Opcion 4: dividir\n");
    
    scanf("%hd",&opcionElegida); 

    switch (opcionElegida)
    {
    case 1: //Suma
        printf("La opcion elegida es suma \n");
        printf("Ingrese el numero 1: ");
        scanf("%f", &numero1); 
        printf("Ingrese el numero 2: ");
        scanf("%f", &numero2);
        resultado = numero1 + numero2;
        printf("La suma entre esos numeros es: %d\n", resultado );
        break;
    case 2: //Resta
        printf("La opcion elegida es resta \n");
        printf("Ingrese el numero 1: ");
        scanf("%f", &numero1); 
        printf("Ingrese el numero 2: ");
        scanf("%f", &numero2);
        resultado = numero1 - numero2;
        printf("La resta entre esos numeros es: %d\n", resultado);
        break;
    case 3: //Multiplicacion
        printf("La opcion elegida es multplicacion \n");
        printf("Ingrese el numero 1: ");
        scanf("%f", &numero1); 
        printf("Ingrese el numero 2: ");
        scanf("%f", &numero2);
        resultado = numero1 * numero2;
        printf("La multiplicacion entre esos numeros es: %d\n", resultado);
        break;
    case 4: // División
        printf("La opcion elegida es division \n");
        printf("Ingrese el numero 1: ");
        scanf("%f", &numero1); 
        printf("Ingrese el numero 2: ");
        scanf("%f", &numero2);
        resultado = numero1 / numero2;
        printf("La division entre esos numeros es: %d\n", resultado);
        break;
    default:
        printf("La opcion elegida no es correcta \n");
        break;
    }
}