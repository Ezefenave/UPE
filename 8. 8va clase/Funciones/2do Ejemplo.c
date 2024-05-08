#include <stdio.h>

int sumar(int, int);
int sumarV2();  //Prototipo de la función, se debe declarar antes  de declarar la función, en esta se indican los tipos de datos que trabaja mi función

int main(){

    int totalSuma;
    totalSuma = sumarV2();
    printf("La suma de los numeros es: %d\n", totalSuma);    

    return 0;
}

int sumarV2(int numero1, int numero2){ //Se deben colocar los parametros entre parentesis
    int totalSuma;

    printf("Ingrese el numero que desea sumar: ");
    scanf("%d",&numero1);

    printf("Ingrese el segundo numero que desea sumar: ");
    scanf("%d",&numero2);

    totalSuma = numero1 + numero2;
    return totalSuma;
}

int sumar(int valor1, int valor2){ //Se deben colocar los parametros entre parentesis
    int total;
    total = valor1 + valor2;
    
    return total;
}