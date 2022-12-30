/* EJERCICIO 7 */

/* Realizar un programa para hallar los divisores de un valor entero */
#include <stdio.h>

int main(){

    int numero, divisor, resto;

    printf("Introduzca el numero deseado: ");
    scanf("%d", &numero);

    for(divisor=1; divisor<=numero; divisor++){
        resto = numero % divisor;
        if(resto == 0){
            printf("\n%d es divisor entero de %d", divisor, numero);
        }
    }
    
    return(0);
}