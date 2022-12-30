/* EJERCICIO 11 - TEMA 3 */

/* Escribir en C la funcion int MCM(int a, int b) que devuelve el mınimo comun multiplo de dos numeros
enteros. */

#include <stdio.h>

int minimo_comun_multiplo(int numero_a, int numero_b){

    int aux, i, mcd, mcm;

    if(numero_a>numero_b){
        aux = numero_b;
    }else{
        aux = numero_a;
    }
    for(i=1; i<=aux; i++){
        if((numero_a%i==0)&&(numero_b%i==0)){
            mcd = i;
        }
    }
    mcm = (numero_a*numero_b)/mcd;
    return(mcm);
}

int main(){

    int numero_a, numero_b;

    printf("Introduzca un numero natural cualquiera: ");
    scanf("%d", &numero_a);
    printf("Introduzca otro numero natural cualquiera: ");
    scanf("%d", &numero_b);

    printf("El Minimo Comun Multiplo de %d y %d es %d", numero_a,  numero_b, minimo_comun_multiplo(numero_a, numero_b));
    return(0);
}