#include <stdio.h>

int main(){
    int contador_mayores = 0;
    int edad;
    int caja = 0;

    printf("Bienvenido al museo \n");

    do{
        printf("\nIngrese la edad de la persona que quiere ingresar al museo (Ingrese 0 para salir): ");
        scanf("%d", &edad);

        if (edad >= 18 && edad <= 100){
            contador_mayores++; 
            caja = caja + 150;
            printf("--------------------------------------------------------------\n");
            printf("La persona que ingreso es mayor y se le cobraron $150\n");
            printf("--------------------------------------------------------------\n");
        }
        else if(edad > 0){
            printf("--------------------------------------------------------------\n");
            printf("La persona que ingreso es menor y se le cobraron $50\n");
            printf("--------------------------------------------------------------\n");
            caja = caja + 50;
        }
    }
    while (edad != 0);
    printf("--------------------------------------------------------------\n");
    printf("\nEl pogama finalizo correctamente \n");
    printf("\n--------------------------------------------------------------");
    printf("\nLa cantidad de personas mayores de edad que ingresaron al museo es de: %d\n", contador_mayores);
    printf("La caja actual es de: $%d\n", caja);
    printf("\n--------------------------------------------------------------");

    return 0;
}
