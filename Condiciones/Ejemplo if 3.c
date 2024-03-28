#include <stdio.h>

int main (){

    float HorasTrabajadas,costo, TasaImpuesto,total;

    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &HorasTrabajadas);
    printf("Ingrese costo por hora: ");
    scanf("%f", &costo);

    if(HorasTrabajadas >= 10){
       total = HorasTrabajadas * costo;
    printf("EL total HT X Costo es: %f \n", total);
       total = total * 1.21;
    printf("EL total es: %f \n", total);
    if( total > 100){
        total = total - 100;
        printf("EL total es: %f \n", total);
    }
    if(total < 100){
        total  = total + 5;
        printf("EL total es: %f \n", total);
    }

    printf("Se aplico un 21 y queda un total de: %f \n",total);
    }
    if(HorasTrabajadas < 10){
        total = HorasTrabajadas * costo;
        printf("EL total HT X Costo es: %f \n", total);
        total = (total * 0.10) + total;
        printf("EL total es: %f \n", total);
        printf("Se aplico un 10 y queda un total de: %f \n",total);
    }

    return 0;

}