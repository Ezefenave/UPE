#include <stdio.h>

int main() {
    float horasTrabajadas;
    float costoHora;
    float total; 

    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%.2f"", &horasTrabajadas);
    
    printf("Ingrese el costo por hora: ");
    scanf("%.2f"", &costoHora);

    if (horasTrabajadas >= 10) {
        total = horasTrabajadas * costoHora;
        total = total * 1.21;
        printf("El total es de: %f \n", total);

        if(total > 100){
            total=total-100;
        printf("El total es de: %f \n", total);
        }

        if(total < 100){
            total=total + 5;
        printf("El total es de: %f \n", total);

        }
        printf("Se aplico un impuesto del 21%% y queda un total de: %.2f\n", total);
    }   
    
    else{
        total = horasTrabajadas * costoHora;
        printf("El costo total HorasTrabajadas * Costo es: %.2f\n", total);
        total = (total * 0.10 + total);
        printf("El total es de: %.2f\n ", total);
        printf("Se aplico un impuesto de 10%% por lo que la paga es: %.2f\n", total); 
    }
    
    return 0;
}