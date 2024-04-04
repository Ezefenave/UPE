/* El siguiente programa realiza una conteo desde el primer numero ingresado hasta el segundo ingresado mostrando unicamente los numeros pares */

#include <stdio.h>
//While
int main(){
    int numero1;
    int numero2;
    
    printf("Ingrese un numero: ");
    scanf("%f",&numero1);

    printf("Ingrese el numero hasta el cual quiera iterar: ");
    scanf("%f",&numero2);

    while(numero1 < numero2) {
        if(numero1%2 == 0){
            printf("%d ", numero1);
        }
        numero1++;
    }

    printf("\n");
    printf("Fuera del while\n");
        return 0;
}
