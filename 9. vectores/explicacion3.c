#include <stdio.h>
#include <string.h>

int main(){
    char nombre[15];
    char segundoNombre[15];
    char apellido[15];

    printf("Ingrese su nombre: ");
    fgets(nombre, sizeof(nombre), stdin);

    printf("Ingrese su segundo nombre: ");
    fgets(segundoNombre, sizeof(segundoNombre), stdin);

    if(strcmp(nombre, segundoNombre) == 0){
        puts("Los nombres son iguales");
    }else{
        printf("Ingrese su apellido: ");
        fgets(apellido, sizeof(apellido), stdin);
    }

    return 0;
}
