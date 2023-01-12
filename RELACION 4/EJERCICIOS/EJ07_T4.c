/* EJERCICIO 7 - TEMA 4 */

/*Construir una funcion que permita ordenar de forma descendente los elementos de un vector.*/

#include <stdio.h>
#define TAM_VECTOR 100

int main(){

    int vector[TAM_VECTOR], dimension_vector;

    dimension_vector = Util_Vector();
    Lectura_Elementos_Vector(vector, dimension_vector);
    Ordenar_Elementos(vector, dimension_vector);
    Imprime_Vector(vector, dimension_vector);
    return(0);
}

int Util_Vector(){

    int util;

    do{
        printf("Introduzca el numero de componentes del vector (entre 1 y 100): ");
        scanf("%d", &util);
    }while(util<1 || util>TAM_VECTOR);

    return(util);
}

void Lectura_Elementos_Vector(int vector[], int dimension_vector){

    int i;

    for(i=0; i<dimension_vector; i++){
        printf("Introduzca el elemento numero %d del vector: ", i+1);
        scanf("%d", &vector[i]);
    }
}

void Ordenar_Elementos(int vector[], int dimension_vector){

    int izda, dcha, posicion_maxima, aux;

    for(izda=0; izda<dimension_vector-1; izda++){
        posicion_maxima = izda;
        for(dcha=izda+1; dcha<dimension_vector; dcha++){
            if(vector[dcha]>vector[posicion_maxima]){
                posicion_maxima = dcha;
            }
        }
        aux = vector[izda];
        vector[izda] = vector[posicion_maxima];
        vector[posicion_maxima] = aux;
    }
}

void Imprime_Vector(int vector[], int dimension_vector){

    int i;

    for(i=0; i<dimension_vector; i++){
        printf("%d\t", vector[i]);
    }
}