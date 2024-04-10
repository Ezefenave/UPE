#include <stdio.h>

int main(){
    float sueldoEmpleado;

    printf("Ingrese el salario del empleado:$ ");
    scanf("%f", &sueldoEmpleado);

    printf("---------------------------------------- \n");

    printf("El sueldo del empleado es:$ %f \n", sueldoEmpleado);

    printf("---------------------------------------- \n");
    
    if (sueldoEmpleado >= 3000)
    {
        printf("El empleado debe pagar impuestos");
    }
    
    return 0;
}