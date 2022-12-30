/* PROBLEMA 2.1.4 - COMPROBAR SI DOS VALORES PERETENECEN A UN VECTOR */

/*Realice un algoritmo que lea dos números enteros por teclado y determine si ambos 
valores forman parte de un vector de enteros previamente definido de dimensión 15.*/

#include <stdio.h>
#define N 15

void main(void){

    int vector[N] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int aux1=0, aux2=0, i, num1, num2;

    printf("Introduzca ambos numeros: \n");
    scanf("%d %d", &num1, &num2);

    for(i=0; i<N; i++){
        if(vector[i]==num1){
            aux1=1;
        }
        if(vector[i]==num2){
            aux2=1;
        }
    }

    if(aux1==1 && aux2==1)
        printf("\nLos numeros introducidos estan en el vector");
    else
        printf("\nLos numeros introducidos no estan el vector");
    return(0);
}
