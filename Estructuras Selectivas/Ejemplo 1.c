#include <stdio.h>
//While
int main(){
    int numero;
    int contador;
    
    contador = 0;

    printf("Ingrese un numero: ");
    scanf("%d",&numero);

while (contador <= 10)
{
    contador++;
    printf("%d", contador);
}
    return 0;
}