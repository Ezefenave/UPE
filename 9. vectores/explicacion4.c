#include <stdio.h>
#include <string.h>

int main(){
    char nombre[15];
    char segundoNombre[15];
    char apellido[15];

    printf("Ingrese su nombre: ");
    fgets(nombre, sizeof(nombre), stdin);

    strcpy(segundoNombre, nombre); //Copio el valor del primer nombre en el segundo nombre
    int longitud = strlen(nombre); // 

    printf("Ingrese su apellido: ");
    fgets(apellido, sizeof(apellido), stdin);
    
    printf("%s %s %s",nombre, segundoNombre,apellido);

    printf("%d",longitud); //

    return 0;
}
