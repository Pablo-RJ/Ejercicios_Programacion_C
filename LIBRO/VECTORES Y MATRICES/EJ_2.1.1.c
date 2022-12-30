/* PROBLEMA 2.1.1 - VECTOR AL REVÉS */

/*Desarrolla un programa que lea las N componentes de un vector y las escribaa continuación en orden
inverso al introducido. El valor de N se introduce por teclado y se supone que será igual o menor a 10*/

#include <stdio.h>

void main(void){

    float vector[10];
    int i, N;

    printf("Programa que lee las N componentes de un vector y las imprime en orden inverso\n\n");

    printf("Introduce cuantas componentes quieres dentro de tu vector (N<=10): ");
    scanf("%d", &N);

    for(i=0; i<N; i++){
        printf("\nIntroduce el valor de la componente %d: ", i+1);
        scanf("%f", &vector[i]);
    }

    printf("Las componentes en orden inverson son:\n\n");

    for(i=N-1; i>=0; i--){
        printf("%.2f\t", vector[i]);
    }
    return(0);
}