/* EJERCICIO 2 - TEMA 4 */

/*Dado un vector de numeros reales, realizar una funcion que determine el primer y segundo elemento mas
grandes del vector.*/

#include <stdio.h>

int Dos_Elementos_Mayores(int vector[], int *primero_mas_grande, int *segundo_mas_grande);

int main(){

    int vector[10];
    int i;
    int primero_mas_grande, segundo_mas_grande;

    for(i=1; i<=10; i++){
        printf("Introduce el elemento numero %d del vector: ", i);
        scanf ("%d", &vector[i]);    
    }   
    printf("\nLos elementos finales del vector son: ");
    for(i=1; i<=10; i++){
        printf("%d ", vector[i]);
    }
    
    Dos_Elementos_Mayores(vector, &primero_mas_grande, &segundo_mas_grande);
    printf("\nEl primero elemento mas grande es %d y el segundo mas grande es %d", primero_mas_grande, segundo_mas_grande);

    return(0);
}
 
 /*Funcion que busca los dos numeros mas grandes del vector*/
int Dos_Elementos_Mayores(int vector[], int *primero_mas_grande, int *segundo_mas_grande){

    int i;

    *primero_mas_grande=0;
    *segundo_mas_grande=0;

    for(i=1; i<=10; i++){
        if(vector[i] > *primero_mas_grande){
            *primero_mas_grande = vector[i];
        }
    }
    
    for(i=1; i<=10; i++){
        if((vector[i] > *segundo_mas_grande) && (vector[i] < *primero_mas_grande)){
            *segundo_mas_grande = vector[i];
        }
    }
}