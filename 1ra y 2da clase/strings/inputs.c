#include <stdio.h>

int main(){
    float primerNumero;
    float segundoNumero;
    int resultadoSuma;
    int restultadoMultiplicacion;
    char caracterIngresado;

    printf("Ingrese un numero: ");
    scanf ("%f",&primerNumero);
                                            //De esta manera puedo solicitar numeros
    printf("Ingrese otro numero: ");
    scanf ("%f",&segundoNumero);

    resultadoSuma = primerNumero + segundoNumero; 

    printf("El resultado de la suma de esos numeros es: %d\n", resultadoSuma); 

    restultadoMultiplicacion = primerNumero * segundoNumero;

    printf("El resultado de la multiplicacion de esos numeros es: %d\n ", restultadoMultiplicacion);  

    fflush(stdin);

    printf("Ingrese un caracter: ");
    scanf("%c", &caracterIngresado);       //De esta manera puedo solicitar caracteres
    printf("El caracter ingresado es: %c\n", caracterIngresado);

    return 0;

}  
