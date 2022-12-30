/* EJERCICIO 22 - TEMA 3 */

/* Hacer una funcion para calcular el cociente y el resto de una division entera. La funcion recibira los dos
numeros dividendo y divisor y devolvera los dos numeros cociente y resto. No se puede utilizar la funcion
modulo y la division entera hay que hacerlo por restas sucesivas. Hacer un main que ilustre como se usa
la funcion. */

#include <stdio.h>

int division(int dividendo, int divisor, int*resto);

int main(){

    int dividendo, divisor, cociente, resto;

    printf("Introduzca el dividendo: ");
    scanf("%d", &dividendo);
    printf("Introduzca el divisor: ");
    scanf("%d", &divisor);

    cociente = division(dividendo, divisor, &resto);

    printf("\nEl cociente de la division es %d y el resto es igual a %d", cociente, resto);
    return(0);
}

int division(int dividendo, int divisor, int *resto){

    int cociente, i=0, continuar = 1;

    *resto = dividendo;
    
    while(continuar){
        if(*resto<divisor){
            continuar = 0;
        }else{
            * resto = *resto - divisor;
            i++;
        }
    }   
    cociente = i;
    return(cociente);
}