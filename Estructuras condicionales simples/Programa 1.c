/*Realice un programa donde el operador ingrese las horas trabajadas por el empleado, el costo por hora e imprima el sueldo*/

#include<stdio.h>

int main() {
    int horasTrabajadas;
    float costoHora;
    float sueldo;

    printf("Ingrese las horas trabajadas por el empleado:");
    scanf("%d", &horasTrabajadas);

    printf("Ingrese el pago por hora: ");
    scanf("%f", &costoHora);

    sueldo = horasTrabajadas * costoHora;

    printf("El sueldo total del operario es: %f", sueldo);

    return 0;
}