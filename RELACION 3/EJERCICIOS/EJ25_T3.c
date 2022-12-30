/* EJERCICIO 25 - TEMA 3 */

/*Escribir un programa (con las funciones que se estime pertinentes) que escriba todos los numeros perfectos
menores que 1000. Se dice que un numero es perfecto cuando es igual a la suma de todos sus divisores
(incluyendo el 1 y excluyendo el propio numero).*/

#include <stdio.h>
#include <stdlib.h>

int Calculo_Numero_Perfecto(){
    
    int numero, i, divisor, suma_divisores;
    
    for(numero=1; numero<=1000; numero++){
        suma_divisores = 0;
        for(i=1; i<numero; i++){
            if(numero%i==0){
                suma_divisores = suma_divisores + i;
            }
        }
        if(suma_divisores==numero){
            printf("\n'%d' es un numero perfecto", numero);
        }
    }
    
    return(numero);
}

int main(){

    printf("Los numeros perfectos contenidos entre 0 y 1000 son: ");
    Calculo_Numero_Perfecto();
    return(0);
}
