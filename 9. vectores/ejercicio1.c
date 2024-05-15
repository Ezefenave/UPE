#include <stdio.h>

#define tam 5
int main() {
    int vectorNumeros[tam];

    for(int i = 0; i < tam; i++) {
        printf("Ingrese el numero que desea agregar al vector: "); 
        scanf("%d", &vectorNumeros[i]); 
    }
    
    for(int i = 0; i < tam; i++) { 
        if(vectorNumeros[i] % 2 == 0) { //De esta manera verifico si el numero es par o no sacando el modulo del numero
            printf("En la posicion %d dentro del vector se encuentra un numero par el cual es: %d\n", i, vectorNumeros[i]);
        }
    }

    for(int i = 0; i < tam; i++) { 
        if(!(vectorNumeros[i] % 2 == 0)) { //De esta manera verifico si el numero es par o no sacando el modulo del numero
            printf("En la posicion %d dentro del vector se encuentra un numero impar el cual es: %d\n", i, vectorNumeros[i]);
        }
    }

    return 0;
}