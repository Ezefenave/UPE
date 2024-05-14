#include <stdio.h>

#define tamaio 10
#define tam 3

int main(void){

    int numero = 0;
    int num;

    int vectorNumeros [3];

    for (int i =0; i<3; i++){
        printf("Ingrese un numero para guardar en el vector: ");
        scanf("%d",&vectorNumeros[i]);
    }

     for (int i =0; i<3; i++){
        printf("Numero dentro del vector: ");
        scanf("%d",&vectorNumeros[i]);
     }

     printf("El valor en el indice 2 es: %d", vectorNumeros[2]);

    return 0;
}
