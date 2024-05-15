#include <stdio.h>

int main() {
    char primeraManera[9] = "Ezequiel";
    char segundaManera[9];

    segundaManera[0] = 'E';
    segundaManera[1] = 'Z';
    segundaManera[2] = 'e';
    segundaManera[3] = 'q';
    segundaManera[4] = 'u';
    segundaManera[5] = 'i';
    segundaManera[6] = 'e';
    segundaManera[7] = 'l';
    segundaManera[8] = '\0'; 

    printf("El nombre escrito es: %s\n", primeraManera); 
    printf("El nombre escrito es: %s\n", segundaManera);

    return 0;
}