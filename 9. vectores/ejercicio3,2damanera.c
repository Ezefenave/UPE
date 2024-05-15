#include <stdio.h>

int main() {
    char nombre[15];
    char apellido[15];

    printf("Ingrese su nombre: ");
    fgets(nombre, sizeof(nombre), stdin);

    for (int i = 0; i< 15; i++){ //Inicio un bucle que recorra el vector hasta encontrar el '\0' que me sirve para darle indice a los caracteres dentro de mi funcion
        if (nombre[i] == '\n'){ 
            nombre[i] = '\0'; //Busco el indice donde se almaceno el salto de linea y lo remplazo por el '\0'
        }
    }

    printf("Ingrese su apellido: ");
    fgets(apellido, sizeof(apellido), stdin);

    printf("Su nombre y apellido son: %s %s",nombre, apellido);
}