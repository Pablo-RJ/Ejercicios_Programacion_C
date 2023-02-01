#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX_VECTOR 100

/********************************************************************************************************/
/*                                       CABECERAS O POROTIPADO                                         */
/********************************************************************************************************/
void Pedir_Componentes_Vector(int vector[], int util_vector);
void Imprimir_Vector(int vector[], int util_vector);
void Copiar_Vector(int vector_inicial[], int vector_copia[], int util_vector_copia);
int Buscar_Componentes_Repetidas(int vector_copia[], int util_vector_copia);
void Ordenar_Vector(int vector[], int util_vector);
void Crear_Frecunecias_Repetidos(int vector_inicial[], int vector_copia[], int vector_frecuencias[], int util_vector_inicial, int util_vector_copia);
/********************************************************************************************************/
/*                                         PROGRAMA PRINCIPAL                                           */
/********************************************************************************************************/
int main(){

    int vector_inicial[TAM_MAX_VECTOR], util_vector_inicial;
    int vector_copia[TAM_MAX_VECTOR], util_vector_copia;
    int vector_frecuencias[TAM_MAX_VECTOR];

    do{
        printf("Introduce el numero de componentes del vector: ");
        scanf("%d", &util_vector_inicial);
    }while(util_vector_inicial<1 || util_vector_inicial>100);

    Pedir_Componentes_Vector(vector_inicial, util_vector_inicial);
    printf("El vector inicial es:\n");
    Imprimir_Vector(vector_inicial, util_vector_inicial);

    util_vector_copia = util_vector_inicial;
    Copiar_Vector(vector_inicial, vector_copia, util_vector_copia);
    printf("\nEl vector copia es:\n"),
    Imprimir_Vector(vector_copia, util_vector_copia);

    util_vector_copia = Buscar_Componentes_Repetidas(vector_copia, util_vector_copia);
    printf("\nEl vector inicial sin los componentes repetidos es:\n");
    Imprimir_Vector(vector_copia, util_vector_copia);

    Ordenar_Vector(vector_copia, util_vector_copia);
    printf("\nEl vector odenado es:\n");
    Imprimir_Vector(vector_copia, util_vector_copia);

    Crear_Frecunecias_Repetidos(vector_inicial, vector_copia, vector_frecuencias, util_vector_inicial, util_vector_copia);
    printf("\nEL numero de veces que se repite cada numero es:\n");
    Imprimir_Vector(vector_frecuencias, util_vector_copia);

    return(0);
}
/********************************************************************************************************/
/*                                              FUNCIONES                                               */
/********************************************************************************************************/
void Pedir_Componentes_Vector(int vector[], int util_vector){

    int i;

    for(i=0; i<util_vector; i++){
        printf("Introduce el elemento numero %d del vector ", i+1);
        scanf("%d", &vector[i]);
    }
}

void Imprimir_Vector(int vector[], int util_vector){

    int i;

    for(i=0; i<util_vector; i++){
        printf("%d\t", vector[i]);
    }
}

void Copiar_Vector(int vector_inicial[], int vector_copia[], int util_vector_copia){

    int i;

    for(i=0; i<util_vector_copia; i++){
        vector_copia[i] = vector_inicial[i];
    }
}

int Buscar_Componentes_Repetidas(int vector_copia[], int util_vector_copia){

    int i, j, k;

    for(i=0; i<util_vector_copia; i++){
        for(j=i+1; j<util_vector_copia; j++){
            if(vector_copia[i] == vector_copia[j]){
                k = j;
                while(k < util_vector_copia){
                    vector_copia[k] = vector_copia[k+1];
                    k++;
                }
                util_vector_copia--;
                j--;
            }
        }
    }
    return(util_vector_copia);
}

void Ordenar_Vector(int vector[], int util_vector){

    int i, aux, ordenado;

    do{
        ordenado=1;
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

void Crear_Frecunecias_Repetidos(int vector_inicial[], int vector_copia[], int vector_frecuencias[], int util_vector_inicial, int util_vector_copia){

    int i, j, apariciones=0;

    for(i=0; i<util_vector_copia; i++){
        apariciones=0;
        for(j=0; j<util_vector_inicial; j++){
            if(vector_copia[i]==vector_inicial[j]){
                apariciones++;
            }
        }
        vector_frecuencias[i] = apariciones;
    }
}


