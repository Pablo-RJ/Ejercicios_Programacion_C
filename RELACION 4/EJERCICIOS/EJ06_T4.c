/* EJERCICIO 6 - TEMA 4 */

/*Realizar una funcion que mezcle de forma ordenada dos vectores ya ordenados en un tercer vector.*/

#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX_VECTOR 100
/*******************************************************************************************************/
/*                                      CABECERAS O PROTOTIPADO                                        */
/*******************************************************************************************************/
int Pedir_Numero_Componentes_Vector();
void Pedir_Componentes_Vector(int vector[], int util_vector);
void Imprimir_Componentes_Vector(int vector[], int util_vector);
void Mezclar_Ordenar_Vector(int vector_uno[], int vector_dos[], int vector_final[], int util_vector_uno, int util_vector_dos, int util_vector_final);
/*******************************************************************************************************/
/*                                       PROGRAMA PRINCIPAL                                            */
/*******************************************************************************************************/
int main(){

    int vector_uno[TAM_MAX_VECTOR], vector_dos[TAM_MAX_VECTOR], vector_final[2*TAM_MAX_VECTOR], util_vector_uno, util_vector_dos, util_vector_final;

    /*Pedimos el numero de componentes final que va a tener cada vector Y Ppor tanto podemos calcular las del vector suma también*/
    printf("PRIMER VECTOR:\n");
    util_vector_uno = Pedir_Numero_Componentes_Vector();
    printf("SEGUNDO VECTOR:\n");
    util_vector_dos = Pedir_Numero_Componentes_Vector();
    util_vector_final = util_vector_uno + util_vector_dos;

    /*Pedimos las componentes de cada vector de una en una e imprimos por pantalla el cada vector introducido*/
    printf("\n\nPRIMER VECTOR:\n");
    Pedir_Componentes_Vector(vector_uno, util_vector_uno);
    Imprimir_Componentes_Vector(vector_uno, util_vector_uno);
    printf("\n\nSEGUNDO VECTOR:\n");
    Pedir_Componentes_Vector(vector_dos, util_vector_dos);
    Imprimir_Componentes_Vector(vector_dos, util_vector_dos);

    /*Mezclamos ambos vectores iniciales en uno solo*/
    Mezclar_Ordenar_Vector(vector_uno, vector_dos, vector_final, util_vector_uno, util_vector_dos, util_vector_final);
    
    /*Imprimimos por pantalla el resultado final*/
    printf("\n\nVECTOR FINAL:\n");
    Imprimir_Componentes_Vector(vector_final, util_vector_final);

    return(0);
}
/*******************************************************************************************************/
/*                                            FUNCIONES                                                */
/*******************************************************************************************************/
int Pedir_Numero_Componentes_Vector(){

    int numero_componentes;

    printf("Introduce el numero de componentes del vector: ");
    scanf("%d", &numero_componentes);

    return(numero_componentes);
}

void Pedir_Componentes_Vector(int vector[], int util_vector){

    int i;

    for(i=0; i<util_vector; i++){
        printf("Introduce el elemento numero %d del vector: ", i+1);
        scanf("%d", &vector[i]);
    }
}

void Imprimir_Componentes_Vector(int vector[], int util_vector){

    int i;

    for(i=0; i<util_vector; i++){
        printf("%d\t", vector[i]);
    }
}

void Mezclar_Ordenar_Vector(int vector_uno[], int vector_dos[], int vector_final[], int util_vector_uno, int util_vector_dos, int util_vector_final){

    int i, contador_uno=0, contador_dos=0;

    for(i=0; i<util_vector_final; i++){
        if(vector_uno[contador_uno] < vector_dos[contador_dos]){
            vector_final[i] = vector_uno[contador_uno];
            contador_uno++;
        }else{
            vector_final[i] = vector_dos[contador_dos];
            contador_dos++;
        }
    }
}



