/* El siguiente programa realiza una conteo desde el primer numero ingresado hasta el segundo ingresado mostrando unicamente los numeros pares */

#include <stdio.h>
//While
int main() {
    float numero1;
    float numero2;
    
    printf("Ingrese un numero: ");
    scanf("%f", &numero1); 

    printf("Ingrese el numero hasta el cual quiera iterar: ");
    scanf("%f", &numero2);

    
    while (numero1 <= numero2) {
        
        if ((int)numero1 % 2 == 0) { 
            printf("%f\n", numero1);
        }
        numero1++;
    }

    printf("\n");
    printf("Fuera del while\n");
    
    return 0;
}
