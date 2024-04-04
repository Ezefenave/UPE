#include <stdio.h>

int main(){
    int primerNumero;
    int segundoNumero;
    int resultadoSuma;
    int restultadoMultiplicacion;
    char caracterIngresado;

    printf("Ingrese un numero: ");
    scanf ("%f",&primerNumero);
                                            //De esta manera puedo solicitar numeros
    printf("Ingrese otro numero: ");
    scanf ("%f",&segundoNumero);

    resultadoSuma = primerNumero + segundoNumero; 

    printf("El resultado de la suma de esos numeros es: %d ", resultadoSuma); 

    restultadoMultiplicacion = primerNumero * segundoNumero;

    printf("El resultado de la multiplicacion de esos numeros es: %d ", restultadoMultiplicacion);  

    fflush(stdin);

    printf("Ingrese un caracter: ");
    scanf(" %c", &caracterIngresado);       //De esta manera puedo solicitar caracteres
    printf("El caracter ingresado es: %c ", caracterIngresado);

    return 0;

}  
