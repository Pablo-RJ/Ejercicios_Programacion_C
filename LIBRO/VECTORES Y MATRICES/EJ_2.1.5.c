/* PROBLEMA 2.1.5 - VECTOR DE FACTORIALES */

/*Dado un vector wue contiene los primeros 15 numeros naturales, calcule un vector
factorial con sus factoriales y mostrarlo por pantalla*/

//TODO: Terminar ejercicio

#include <stdio.h>
#define N 15

void main(void){

    int vec[N];
    int fact[N];
    int i, j;

    for(i=0; i<N; i++){
        vec[i] = i+1;
        fact[i] = 1;
    }

    return(0);
}
