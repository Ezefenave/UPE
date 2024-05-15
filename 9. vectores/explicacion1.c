#include <stdio.h>

int main(){
    int vectorNumeros[5];

    for(int i=0; i<5; i++){
        printf("Ingrese el numero que desea agregar al vector: ");
        scanf("%d",&vectorNumeros[i]);
    }
    
    for(int i=0; i<5; i++){
        printf("\nEl elemento en la posicion %d del vector es: %d\n", i, vectorNumeros[i]);
    }

    return 0;
}