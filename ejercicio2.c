#include <stdio.h>

#define tam 5
int main() {
    int vectorNumeros[tam];
    int acumulador = 0;
    int promedio = 0;

    for(int i = 0; i < tam; i++) {
        printf("Ingrese el numero que desea agregar al vector: "); 
        scanf("%d", &vectorNumeros[i]); 
        acumulador += vectorNumeros[i]; //De esta manera acumulo los numeros que me ingresan al vector
    }
    
    promedio = acumulador / tam;
    printf("El promedio de los numeros que se encuentran dentro del vector es:%d ", promedio); 
    return 0;
}