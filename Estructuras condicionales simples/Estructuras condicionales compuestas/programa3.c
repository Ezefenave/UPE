/* Realice un programa donde el operador ingrese dos números y muestre por pantalla el mayor de ellos.*/
#include <stdio.h>

int main(){
    int firstNumber;
    int secondNumber;

    printf("Ingrese el primer numero: ");
    scanf("%d",&firstNumber);

    printf("Ingrese el segundo numero: ");
    scanf("%d",&secondNumber);
    
    if (firstNumber > secondNumber) 
    {
        printf("El mayor es %d\n", firstNumber);
    } 
    else if(secondNumber > firstNumber)
    {
        printf("El mayor es %d\n", secondNumber);  
    }
    else
    {
        printf("Son iguales\n");  
    } 

    return 0;
}