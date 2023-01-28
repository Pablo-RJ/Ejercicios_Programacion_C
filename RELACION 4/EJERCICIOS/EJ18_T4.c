/* EJERCICIO 18 - TEMA 4 */

/*Dado un vector X de n elementos reales donde n es impar, diseÑar una funcion para calcular la mediana
de ese vector. La mediana se define como el valor mayor que la mitad de los numeros y menor que la otra mitad.*/

#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX_VECTOR 100
/*******************************************************************************************************/
/*                                      CABECERAS O PROTOTIPADO                                        */
/*******************************************************************************************************/
void Pedir_Componentes_Vector(int vector[], int util_vector);
void Imprimir_Vector(int vector[], int util_vector);
void Ordenar_Vector(int vector[], int util_vector);
float Encontrar_Mediana(int vector[], int util_vector);
/*******************************************************************************************************/
/*                                       PROGRAMA PRINCIPAL                                            */
/*******************************************************************************************************/
int main(){

    int vector[TAM_MAX_VECTOR], util_vector;
    float mediana;

    printf("Introduzca el tamano de componentes que va a usar: ");
    scanf("%d", &util_vector);

    Pedir_Componentes_Vector(vector, util_vector);
    printf("El vector de numeros introducido es igual a:\n");
    Imprimir_Vector(vector, util_vector);

    Ordenar_Vector(vector, util_vector);
    printf("Los numeros ordenados de menor a mayor son:\n");
    Imprimir_Vector(vector, util_vector);

    mediana = Encontrar_Mediana(vector, util_vector);
    printf("La mediana del vector de numeros introducido es: %.2f", mediana);

    return(0);
}
/*******************************************************************************************************/
/*                                            FUNCIONES                                                */
/*******************************************************************************************************/
void Pedir_Componentes_Vector(int vector[], int util_vector){    

    int i;

    for(i=0; i<util_vector; i++){
        printf("Introduzca el elemento %d: ", i+1);
        scanf("%d", &vector[i]);
    }
}

void Imprimir_Vector(int vector[], int util_vector){

    int i;

    for(i=0; i<util_vector; i++){
        printf("%d\t", vector[i]);
    }
    printf("\n");
}

void Ordenar_Vector(int vector[], int util_vector){

    int i, j, ordenado, aux;

    do{
        ordenado = 1;
        for(i=0; i<util_vector-1; i++){
            if(vector[i] > vector[i+1]){
                aux = vector[i];
                vector[i] = vector[i+1];
                vector[i+1] = aux;
                ordenado = 0;
            }
        }
    }while(ordenado == 0);
}

float Encontrar_Mediana(int vector[], int util_vector){

    float mediana;

    if(util_vector%2 == 0){
        mediana = (vector[(util_vector/2)-1] + vector[(util_vector/2)]) / 2.0;
    }else{
        mediana = vector[(util_vector/2)];
    }

    return(mediana);
}