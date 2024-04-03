#include <stdio.h>
//While
int main(){
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d",&numero);

    while (numero < 10)
    {
        numero++;
        printf("%d ", numero);
    }
    printf("\n");
    printf("Fuera del while\n");
        return 0;
}