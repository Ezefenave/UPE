#include <stdio.h>

int main() {
    int opcion;

    do {
        printf("Elige una opcion: ");
        scanf("%d", &opcion);
        
        if (opcion == 1) {
            printf("Elegiste la opcion 1\n");
        } else {
            printf("Opción no válida. Elige la opcion 1 para continuar.\n");
        }
    } while (opcion != 1); 
    
    return 0; 
} 