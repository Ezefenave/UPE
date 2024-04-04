#include <stdio.h>

int main(){
    float numero1;
    float numero2;
    float resultado;
    short opcionElegida;

    printf("Ingrese la opcion que desea realizar: \n");
    
    printf("Opcion 1: Sumar \n");
    printf("Opcion 2: Restar \n");
    printf("Opcion 3: Multiplicar \n");
    printf("Opcion 4: Dividir\n");
    printf("Opcion 5: Salir\n");
    scanf("%hd",&opcionElegida); 

    while (opcionElegida != 5) 
        {
        switch (opcionElegida)
        {
        case 1: //Suma
            printf("La opcion elegida es suma \n");
            printf("Ingrese el numero 1: ");
            scanf("%f", &numero1); 
            printf("Ingrese el numero 2: ");
            scanf("%f", &numero2);
            resultado = numero1 + numero2;
            printf("La suma entre esos numeros es: %f\n", resultado );
            break;
        case 2: //Resta
            printf("La opcion elegida es resta \n");
            printf("Ingrese el numero 1: ");
            scanf("%f", &numero1); 
            printf("Ingrese el numero 2: ");
            scanf("%f", &numero2);
            resultado = numero1 - numero2;
            printf("La resta entre esos numeros es: %f\n", resultado);
            break;
        case 3: //Multiplicacion
            printf("La opcion elegida es multplicacion \n");
            printf("Ingrese el numero 1: ");
            scanf("%f", &numero1); 
            printf("Ingrese el numero 2: ");
            scanf("%f", &numero2);
            resultado = numero1 * numero2;
            printf("La multiplicacion entre esos numeros es: %f\n", resultado);
            break;
        case 4: // Division
            printf("La opcion elegida es division \n");
            printf("Ingrese el numero 1: ");
            scanf("%f", &numero1); 
            printf("Ingrese el numero 2: ");
            scanf("%f", &numero2);
            resultado = numero1 /numero2;
            printf("La multiplicacion entre esos numeros es: %f\n", resultado);
        default:
            printf("La opcion elegida no es correcta \n");
        }
        printf("Ingresa otra opcion \n");
        scanf("%hd",&opcionElegida);        
    }
    return 0;
}