#include <stdio.h>

int main() {
    int primerParcial;
    int segundoParcial;
    int promedioParcial;

    printf("Ingrese la nota del primer parcial: ");
    scanf("%d", &primerParcial);

    printf("Ingrese la nota del segundo parcial: ");
    scanf("%d", &segundoParcial);
    
    printf("----------------------------------------------------------------\n");

    printf("La nota del primer parcial es: %d\n", primerParcial);
    printf("La nota del segundo parcial es: %d\n", segundoParcial);
    
    promedioParcial = (primerParcial + segundoParcial) / 2;

    printf("----------------------------------------------------------------\n");

    if (promedioParcial >= 7) {
        printf("Felicidades, promocionaste la materia.\n");
    } else {
        printf("Debes rendir parcial.\n");
    }
    
    return 0;
}