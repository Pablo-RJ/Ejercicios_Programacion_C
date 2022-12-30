/* PROBLEMA 2.1.2 - NORMA DE UN VECTOR AL CUADRADO */

/*Desarrolle un programa que lea las n componentes reles de un vector vec y calcules:
m = vec^T * vec 
El tamaño n se introduce por teclado y puede suponer que es igual o menor que 10.*/

#include <stdio.h>

void main(void){
    
    float vec[10];
    int i, n;
    float res=0;

    printf("PROGRAMA QUE LEE LAS N COMPONENTES DE UN VECTOR\n");
    printf("Y CALCULA LA NORMAL AL CUADRADO DEL MISMO\n\n");

    printf("Introduce n<=10\t");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("\nIntroduce el valor de la componente %d\t", i+1);
        scanf("%f", &vec[i]);
        res += vec[i]*vec[i];
    }
    printf("\nLa norma al cuadrado del vector es: %.2f\n\n", res);
    return(0);
}
