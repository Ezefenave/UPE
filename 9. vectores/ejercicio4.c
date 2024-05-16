/*
Agregar la opción mostrar la cantidad de letras de la palabra secreta y mostrar la primera y ultima letra. p_ _ _ _a  prueba
*/

#include <stdio.h>
#include <string.h>

int main() {
    char palabraSecreta[15] = "palabra";
    char palabraIngresada[10];
    int limiteIntentos = 5;
    int banderaCompletado = 0;
    int longitud;
    char confirmacion;
    int banderaPista = 0;
    
    printf("Bienvenido al juego\n");

    do {
        printf("Ingrese la palabra en la que esta pensando: ");
        fgets(palabraIngresada, sizeof(palabraIngresada), stdin);

        for (int i = 0; i < strlen(palabraIngresada); i++) {
            if (palabraIngresada[i] == '\n') { //Elimino el salto de linea que se genera al apretar el enter por parte del usuario
                palabraIngresada[i] = '\0';
            }
        }
        if (strcmp(palabraIngresada, palabraSecreta) == 0) { //Hago la comparacion para ver si las palabras son correctas
            puts("\nAdivinaste la palabra\n");
            printf("La palabra secreta era '%s'\n", palabraIngresada);
            banderaCompletado = 1;
        } else { //En caso de que no sea correcta le indico al usuario y disminuyo un intento
            limiteIntentos--; 
            printf("Intento fallido. Te quedan %d intentos\n", limiteIntentos); //Le muestro al usuario la cantidad de intentos restantes
            
        if(banderaPista == 0){ //Coloco esta bandera para le solicite al usuario la confirmacion una sola vez
            printf("Desea obtener una pista?. Ingrese s para obtener una pista: ");
            scanf("%c", &confirmacion);
            getchar(); //Con el getchar logro que solo
        }
            if(confirmacion == 's' ) { //Coloco una bandera para que pueda mostrarle esto al usuario una sola vez
            longitud = strlen(palabraSecreta);
            printf("-------------------------------------------------------------------------------------\n");
            printf("La longitud de la palabra secreta es de: %d letras\n", longitud);
            printf("La primera letra de la palabra secreta es: '%c'\n", palabraSecreta[0]); //Muestro la primera letra de la palabra secreta 
            printf("La ultima letra de la palabra secreta es: '%c'\n", palabraSecreta[strlen(palabraSecreta) - 1]); //Muestro la ultima letra de la palabra secreta
            printf("-------------------------------------------------------------------------------------\n");
            banderaPista = 1;
        }
        }
        
    }
    while (limiteIntentos > 0 && banderaCompletado == 0); //Verifico si el usuario tiene intentos restantes ademas de verificas si el usuario no adivino al primer inteno

    if (banderaCompletado == 0) {
        printf("\nHas agotado tus intentos. La palabra secreta era: %s\n", palabraSecreta); //Si al finalizar el bucle el usuario no adivino, por lo que no cambia la bandera imprimo el mensaje que le indica al usuario la palabra oculta
    }
    printf("--------------------------------------------------------------------------");
return 0;
}
