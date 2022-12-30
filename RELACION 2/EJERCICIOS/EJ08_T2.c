/* EJERCICIO 8 - TEMA 2 */

/*Realizar un programa que lea 1000 reales y calcule el maximo de dichos valores. Depurar el programa con
10 numero y luego hacer uso de la redireccion de la entrada para leer los 1000 de un fichero.*/

#include <stdio.h>
#include <time.h>

int main(){

    int i, j, numero;

    srand(time(NULL));
    for(i=1; i<=1000; i++){
        numero = rand()%1000+1;
        printf("%d\t", numero);
    }
    return(0);
}