/*
9. Programe en ANSI C la siguiente secuencia de instrucciones:

Inicio
Leer Número de horas trabajadas
Leer Tarifa (costo por hora)
Leer tasa de impuesto (porcentaje)
Calcular Paga Bruta = Número de horas trabajadas * Tarifa
Calcular Impuestos = Paga Bruta * Tasa
Calcular Pago Neta = Paga Bruta – Impuestos
Visualizar Paga Bruta
Visualizar Impuestos
Visualizar Pago Neta
Fin
*/

#include <stdio.h>

int main(){
    
    int horastrabajadas;
    int tarifa;
    int tasaiimpues;
    int pagabruta;
    int impuestosaplicados;
    int pagoneto;

    printf("Ingrese la cantidad trabajadas: ");
    scanf ("%d",&horastrabajadas);
    
    printf("Ingrese el valor de la tarifa: $ ");
    scanf ("%d/n",&tarifa);
    
    printf("Ingrese el valor de la tasa de impuestos:  ");
    scanf ("%d/n",&tasaiimpues);
    
    pagabruta = horastrabajadas*tarifa;
    printf("El valor de la paga bruta es: $ %d\n", pagabruta);

    impuestosaplicados = pagabruta*tasaiimpues / 100;
    printf("El valor de los impuestos aplicados es de: $%d\n", impuestosaplicados);
    
    pagoneto = pagabruta-impuestosaplicados;
    printf("El valor del pago neto es de : $%d", pagoneto);

    return 0;
}