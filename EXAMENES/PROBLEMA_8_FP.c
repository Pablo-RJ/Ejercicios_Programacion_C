#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX_VECTOR 100

/**************************************************************************************************************************/
/*                                                CABECERAS O PROTOTIPADO                                                 */
/**************************************************************************************************************************/

/**************************************************************************************************************************/
/*                                                  PROGRAMA PRINCIPAL                                                    */
/**************************************************************************************************************************/
int main(){

    int vector[TAM_MAX_VECTOR], util_vector;

    do{
        printf("Introduzca el numero de componentes del vector: ");
        scanf("%d", &util_vector);
    }while(util_vector<1 || util_vector>100);
    
    Pedir_Componentes_Vector(vector, util_vector);
    printf("EL vector inicial es:\n");
    Imprimir_Componentes_Vector(vector, util_vector);

    Ordenar_Componentes_Vector(vector, util_vector);
    printf("\nEl vector inicial ordenado de forma ascendente es:\n");
    Imprimir_Componentes_Vector(vector, util_vector);

    Mediana_Componentes_Vector(vector, util_vector);

    return(0);
}
/**************************************************************************************************************************/
/*                                                      FUNCIONES                                                         */
/**************************************************************************************************************************/
void Pedir_Componentes_Vector(int vector[], int util_vector){

    int i;

    for(i=0; i<util_vector; i++){
        printf("Introduzca el elemento %d del vector: ", i+1);
        scanf("%d", &vector[i]);
    }
}

void Imprimir_Componentes_Vector(int vector[], int util_vector){

    int i;

    for(i=0; i<util_vector; i++){
        printf("%d\t", vector[i]);
    }
}

void Ordenar_Componentes_Vector(int vector[], int util_vector){

    int i, aux, ordenado;

    do{
        ordenado = 1;
        for(i=0; i<util_vector-1; i++){
            if(vector[i] > vector[i+1]){
                aux = vector[i+1];
                vector[i+1] = vector[i];
                vector[i] = aux;
                ordenado = 0;
            }
        }
    }while(ordenado == 0);
}

int Mediana_Componentes_Vector(int vector[], int util_vector){

    float mediana;

    if(util_vector % 2 == 0){
        mediana = (vector[(util_vector/2)-1] + vector[util_vector/2]) / 2.0;
    }else{
        mediana = vector[(util_vector/2)];
    }
    
    printf("\nLa mediana del vector introducido es: %.2f", mediana);
}
