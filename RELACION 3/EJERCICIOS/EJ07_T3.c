/* EJERCICIO 7 - TEMA 3*/

/* Escribir en C la funcion int MCD(int a, int b) que devuelve el maximo comun divisor de dos numeros
enteros. Hacer un main para ilustrar su uso. */

#include <stdio.h>

int MCD(int numero_a, int numero_b){

    int mayor, menor, i, divisor;

    if(numero_a>numero_b){
        mayor = numero_a;
        menor = numero_b;
    }else{
        mayor = numero_b;
        menor = numero_b;
    }
    for(i=1; i<=menor; i++){
        if((numero_a%i==0)&&(numero_b%i==0))
            divisor = i;
    }
    return(divisor);
}


int main(){

    int numero_a, numero_b, maximo;

    printf("Introduce un numero positivo cualquiera: ");
    scanf("%d", &numero_a);
    printf("\nIntroduce un numero positivo cualquiera: ");
    scanf("%d", &numero_b);

    maximo = MCD(numero_a, numero_b);

    printf ("\nEl Maximo Comun Divisor de %d y %d es '%d'", numero_a, numero_b, maximo);

    return(0);
}