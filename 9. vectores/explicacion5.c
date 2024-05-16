#include <stdio.h>
#include <string.h>

#define tam 30

int main(){
    char nombre[15];
    char segundoNombre[15];
    // char apellido[15];

    printf("Ingrese su nombre: ");
    fgets(nombre, sizeof(nombre), stdin);

    printf("Ingrese su segundo nombre: ");
    fgets(segundoNombre, sizeof(segundoNombre), stdin);

    if(strlen(nombre) + strlen(segundoNombre) > tam){
        puts("No es posible copiar los string");
        printf("Nombre: %s", nombre);
        printf("Segundo: %s", segundoNombre);
    }else{
        strcat(nombre, segundoNombre);  
        printf("Nombre: %s", nombre);
        printf("Segundo: %s", segundoNombre);
    }

    return 0;
}