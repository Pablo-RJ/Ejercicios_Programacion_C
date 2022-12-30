/* EJERCICIO 5 - TEMA 4 */

/*Realizar una funcion que elimine los elementos repetidos de un vector, guardando el resultado en el mismo
vector.*/

#include <stdio.h>
#define DIM_VECTOR 10

int Numero_Componentes();
void Componentes_Vector(int vector[], int util_vector);
void Imprimir_Vector(int vector[], int util_vector);
void Elimina_Repetidos(int vector[], int *util_vector)
void Elimina_Componentes

int main(){

    int vector[DIM_VECTOR], util_vector;

    util_vector = Numero_Componentes();
    Componentes_Vector(vector, util_vector);
    Imprimir_Vector(vector, util_vector);
    Elimina_Repetidos(vector, &util_vector);
}

int Numero_Componentes(){

    int tamano_vector;

    printf("Introduce el numero de componentes del vector: ");
    scanf("%d", &tamano_vector);

    return(tamano_vector);
}

void Componentes_Vector(int vector[], int util_vector){

    int i;

    for(i=0; i<util_vector; i++){
        printf("Introduce el %d valor del vector: ", i+1);
        scanf("%d", &vector[i]);
    }
}

void Imprimir_Vector(int vector[], int util_vector){

    int i;

    for(i=0; i<util_vector; i++){
        printf("%d, ", vector[i]);
    }
}

void Elimina_Repetidos(int vector[], int *util_vector){

    int i, j;

    for(i=0; i<util_vector; i++){
        j = j+1;
        while(j<(*util_vector)){
            if(vector[i] == vector[j]){
                elimina(vector, &(*util_vector), j);
                j--;
            }
            j++;
        }
    }
}

void Elimina_Componentes