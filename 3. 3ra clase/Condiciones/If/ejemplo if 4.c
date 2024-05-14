#include <stdio.h>

int main(){

    int primerParcial;
    int segundoParcial;

    printf("Ingrese la nota del primer parcial: ");
    scanf("%.2f", &primerParcial);

    printf("Ingrese la nota del segundo parcial: ");
    scanf("%.2f", &segundoParcial);

    if (!(primerParcial < 7)){
    printf("Negado\n");
    }
    if (primerParcial >= 7 && segundoParcial >= 7) {
        printf("Promociono\n");
    }
    else{
        if (primerParcial >= 4 && segundoParcial >= 4) {
            printf("Regular\n");
        }
        else {
            printf("Desaprobado\n");
        }
    }
return 0;
}