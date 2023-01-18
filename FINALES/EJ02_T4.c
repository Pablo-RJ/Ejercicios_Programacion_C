/* EJERCICIO 2 - TEMA 4 */

/*Dado un vector de numeros reales, realizar una funcion que determine el primer y segundo elemento mas grandes del vector.*/

#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX_VECTOR 100

/*****************************************************************************************/
/*                                PROGRAMA PRINCIPAL                                     */
/*****************************************************************************************/
int main(){

    int vector[TAM_MAX_VECTOR]; int util_vector;

    printf("Introduzca el tamano final el vector (maximo 100): ");
    scanf("%d", &util_vector);

    Pedir_Elementos_Vector(vector, util_vector);
    Numeros_Mas_Grandes(vector, util_vector);

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


void Numeros_Mas_Grandes(int vector[], int util_vector){

    int i, numero_mayor=0, numero_segundo_mayor=0;

    for(i=0; i<util_vector; i++){
        if(vector[i] > numero_mayor){
            numero_mayor = vector[i];
        }
    }

    for(i=0; i<util_vector; i++){
        if((vector[i] > numero_segundo_mayor) && (vector[i] < numero_mayor)){
            numero_segundo_mayor = vector[i];
        }
    }

    printf("\nEl numero mas grande del vector es %d y el segundo es %d", numero_mayor, numero_segundo_mayor);
}