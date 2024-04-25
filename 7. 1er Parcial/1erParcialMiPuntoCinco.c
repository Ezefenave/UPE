// 5. Se solicita un programa en C que soilicite el ingreso de 13 números y al finalizar se debera mostrar por pantalla el promedio de los numeros mayores a 0 leidos. 

#include <stdio.h>

int main(){
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13;
    int promedio = 0;
    int acumulador = 0;
    int contador = 0;

    printf("Ingrese el n1: ");
    scanf("%d",&n1);
    printf("Ingrese el n2: ");
    scanf("%d",&n2);
    printf("Ingrese el n3: ");
    scanf("%d",&n3);
    printf("Ingrese el n4: ");
    scanf("%d",&n4);
    printf("Ingrese el n5: ");
    scanf("%d",&n5);
    printf("Ingrese el n6: ");
    scanf("%d",&n6);
    printf("Ingrese el n7: ");
    scanf("%d",&n7);
    printf("Ingrese el n8: ");
    scanf("%d",&n8);
    printf("Ingrese el n9: ");
    scanf("%d",&n9);
    printf("Ingrese el n10: ");
    scanf("%d",&n10);
    printf("Ingrese el n11: ");
    scanf("%d",&n11);
    printf("Ingrese el n12: ");
    scanf("%d",&n12);
    printf("Ingrese el n13: ");
    scanf("%d",&n13);

    if(n1 > 0){
        acumulador += n1;
        contador++;
    }
    if(n2 > 0){
    acumulador += n2;
    contador++;
}
    if(n3 > 0){
        acumulador += n3;
        contador++;
    }
    if(n4 > 0){
        acumulador += n4;
        contador++;
    }
    if(n5 > 0){
        acumulador += n5;
        contador++;
    }
    if(n6 > 0){
        acumulador += n6;
        contador++;
    }
    if(n7 > 0){
        acumulador += n7;
        contador++;
    }
    if(n8 > 0){
        acumulador += n8;
        contador++;
    }
    if(n9 > 0){
        acumulador += n9;
        contador++;
    }
    if(n10 > 0){
        acumulador += n10;
        contador++;
    }
    if(n11 > 0){
        acumulador += n11;
        contador++;
    }
    if(n12 > 0){
        acumulador += n12;
        contador++;
    }
    if(n13 > 0){
        acumulador += n13;
        contador++;
    }

    promedio = acumulador / contador;

    printf("El promedio de numeros mayores a 0 es: %d", promedio);

    return 0;
}