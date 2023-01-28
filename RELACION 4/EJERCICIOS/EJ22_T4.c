/* EJERCICIO 22 -TEMA 4 */

/*Realizar una funci ́on que acepte de la entrada un vector de numeros enteros y a partir de  ́el obtenga un
vector (indice) de forma que el contenido de  ́este indique de menor a mayor los valores del vector de
enteros. No se modifican los contenidos del vector original. */

#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX_VECTOR 100
/*******************************************************************************************************/
/*                                      CABECERAS O PROTOTIPADO                                        */
/*******************************************************************************************************/
void Pedir_Componentes_Vector(int vector[], int util_vector);
void Imprimir_Vector(int vector[], int util_vector);
void Copia_Vector(int vector_inicial[], int vector_copia[], int util_vector);
void Ordenar_Vector_Copia(int vector_copia[], int util_vector);
void Buscar_Posicion_Elementos(int vector_inicial[], int vector_copia[], int vector_indice[], int util_vector);

/*******************************************************************************************************/
/*                                       PROGRAMA PRINCIPAL                                            */
/*******************************************************************************************************/
int main(){

    int vector_inicial[TAM_MAX_VECTOR], vector_copia[TAM_MAX_VECTOR], vector_indice[TAM_MAX_VECTOR];
    int util_vector;

    printf("Introduzca el tamano de componentes que va a usar: ");
    scanf("%d", &util_vector);

    Pedir_Componentes_Vector(vector_inicial, util_vector);
    printf("El vector de numeros introducido es igual a:\n");
    Imprimir_Vector(vector_inicial, util_vector);

    Copia_Vector(vector_inicial, vector_copia, util_vector);
    Ordenar_Vector_Copia(vector_copia, util_vector);
    printf("Los numeros ordenados de menor a mayor son:\n");
    Imprimir_Vector(vector_copia, util_vector);

    Buscar_Posicion_Elementos(vector_inicial, vector_copia, vector_indice, util_vector);
    printf("El vector de indices es:\n");
    Imprimir_Vector(vector_indice, util_vector);

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

void Copia_Vector(int vector_inicial[], int vector_copia[], int util_vector){

    int i;

    for(i=0; i<util_vector; i++){
        vector_copia[i] = vector_inicial[i];
    }
}

void Ordenar_Vector_Copia(int vector_copia[], int util_vector){

    int i, j, ordenado, aux;

    do{
        ordenado = 1;
        for(i=0; i<util_vector-1; i++){
            if(vector_copia[i] > vector_copia[i+1]){
                aux = vector_copia[i];
                vector_copia[i] = vector_copia[i+1];
                vector_copia[i+1] = aux;
                ordenado = 0;
            }
        }
    }while(ordenado == 0);
}

void Buscar_Posicion_Elementos(int vector_inicial[], int vector_copia[], int vector_indice[], int util_vector){
    
    int i,salto,j;

    for(i=0;i<util_vector;i++){
        salto=0;
        for (j=0;j<util_vector && salto!=1 ;j++){
            if(vector_inicial[j] == vector_copia[i]){
                vector_indice[i] = j+1;
                salto=1;
            }
        }
    }
}