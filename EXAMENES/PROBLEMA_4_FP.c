#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX_VECTOR 100

struct libro{
    int id;
    int a_pub;
};
/********************************************************************************************************/
/*                                       CABECERAS O POROTIPADO                                         */
/********************************************************************************************************/
void Pedir_Libros_Vector(struct libro vector[], int util_vector);
void Imprimir_Libros(struct libro vector[], int util_vector);
void Ordenar_Libros(struct libro vector[], int util_vector);
/********************************************************************************************************/
/*                                         PROGRAMA PRINCIPAL                                           */
/********************************************************************************************************/
int main(){

    struct libro vector[TAM_MAX_VECTOR];
    int util_vector;

    do{
        printf("Introduzca el numero de libros: ");
        scanf("%d", &util_vector);
    }while(util_vector<1 || util_vector>100);

    Pedir_Libros_Vector(vector, util_vector);
    printf("Los libros introducidos son:\n");
    Imprimir_Libros(vector, util_vector);

    Ordenar_Libros(vector, util_vector);
    printf("\nLos libros introducidos ordenados son:\n");
    Imprimir_Libros(vector, util_vector);

    return (0);
}   
/********************************************************************************************************/
/*                                              FUNCIONES                                               */
/********************************************************************************************************/
void Pedir_Libros_Vector(struct libro vector[], int util_vector){

    int i;

    printf("Introduce el identificador y el ano de publicacion del libro respectivamente:\n");
    for(i=0; i<util_vector; i++){
        printf("Libro[%d]: ", i+1);
        scanf("%d %d", &vector[i].id, &vector[i].a_pub);
    }
}

void Imprimir_Libros(struct libro vector[], int util_vector){

    int i;

    for(i=0; i<util_vector; i++){
        printf("[%d, %d]\t", vector[i].id, vector[i].a_pub);
    }
}

void Ordenar_Libros(struct libro vector[], int util_vector){

    int i, j, ordenado;
    struct libro aux;

   for (i = 0; i < util_vector - 1; i++){
        for (j = 0; j < util_vector - i - 1; j++){
            if (vector[j].a_pub > vector[j + 1].a_pub){
                aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;
            } else if (vector[j].a_pub == vector[j + 1].a_pub){
                if (vector[j].id < vector[j + 1].id){
                    aux = vector[j];
                    vector[j] = vector[j + 1];
                    vector[j + 1] = aux;
                }
            }
        }
    }
}

