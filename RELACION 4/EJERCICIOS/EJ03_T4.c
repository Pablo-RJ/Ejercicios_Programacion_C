/* EJERCICIO 3 - TEMA 4 */

/*Realizar una funcion que permita invertir el contenido de un vector de caracteres. La funcion no hara uso de vectores auxiliares.*/

#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX_VECTOR 100
/*****************************************************************************************/
/*                                   PROTOTIPADO                                         */
/*****************************************************************************************/
void Pedir_Elementos_Vector(int vector[], int util_vector);
void Invertir_Vector(int vector[], int util_vector);
/*****************************************************************************************/
/*                                PROGRAMA PRINCIPAL                                     */
/*****************************************************************************************/
int main(){

    int vector[TAM_MAX_VECTOR]; int util_vector;

    printf("Introduzca el tamano final el vector (maximo 100): ");
    scanf("%d", &util_vector);

    Pedir_Elementos_Vector(vector, util_vector);
    Invertir_Vector(vector, util_vector);

    return(0);
}
/*****************************************************************************************/
/*                                     FUNCIONES                                         */
/*****************************************************************************************/
void Pedir_Elementos_Vector(int vector[], int util_vector){

    int i;

    for(i=0; i<util_vector; i++){
        printf("Introduzca el elemento numero %d del vector: ", i+1);
        scanf("%d", &vector[i]);
    }

    printf("\nEl vector inicial es:\n");
    for(i=0; i<util_vector; i++){
        printf("%d\t", vector[i]);
    }
}


void Invertir_Vector(int vector[], int util_vector){

    int i;

    printf("\nEl vector final invertido es:\n");
    for(i=util_vector-1; i>=0; i--){
        printf("%d\t", vector[i]);
    }
}
