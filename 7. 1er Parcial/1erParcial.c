//Este fue el primer parcial de la cursada el cual contaba con los siguientes 5 puntos:
/*
1. Teniendo en cuenta que a= false, b= true, c = false, d= false. Evaluen las siguiente expresion logica y seleccione su resultado -> !(5<3)&& a || !(d || c).

a. false
b. true 
---------------------------------------------------------------------------------------------------------------------------------------------------
2. Teniendo en cuenta la siguiente secuencia de instrucciones indique los valores que obtienen cada una de las variable:

int X = 2
int Y = X + X = 
Y = Y + 2 = 
X = Y * X = 
---------------------------------------------------------------------------------------------------------------------------------------------------
3. Considerando los siguientes valores char letra 1 = 'C'; char letra 2 = 'D';(Nota: En el codigo ASCII C=67, D=68). Indique la impresión en pantalla.

printf("%d-%c", letra1, letra1); -->
printf("%d-%c", letra2, letra2); -->
printf("%d-%d", letra1, letra2); -->

---------------------------------------------------------------------------------------------------------------------------------------------------

4. ¿Dado el siguiente ejercicio identificar el resultado, si el número ingresado es 8? ¿Que imprime?

#include <stdio.h>
int main(){
    int n1;
    printf("Ingrese un numero: ");
    scanf("%d",&n1);
    while (n1 != 1){
        printf("%d, ", n1);
        n1 --;
    }
    return 0;
}

a. 1,2,3,4,5,6,7
b. 1,2,3,4,5,6,7, 8
c. 8,7,6,5,4,3,2,1
d. 8,7,6,5,4,3,2

---------------------------------------------------------------------------------------------------------------------------------------------------

5. Se solicita un programa en C que soilicite el ingreso de 13 números y al finalizar se debera mostrar por pantalla el promedio de los numeros mayores a 0 leidos. 

---------------------------------------------------------------------------------------------------------------------------------------------------
*/