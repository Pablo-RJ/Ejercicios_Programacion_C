/* EJERCICIO 3 - TEMA 4 */

/*Realizar una funcion que permita invertir el contenido de un vector de caracteres. La funci ́on no har ́a uso
de vectores auxiliares*/

#include <stdio.h>
#define DIM_VECTOR 10

int Numero_Componentes_Vector();
int Introducir_Componentes_Vector();
int Invertir_Vector();


int main(){

    float vector[DIM_VECTOR];

    return(0);
}

int Numero_Componentes_Vector(int vector[]){

    int util_vector;

    printf("Introduce el numero de componentes que deseas que tenga el vector (10max): ");
    scanf("%d", &util_vector);

    return(util_vector);
}

int Introducir_Componentes_Vector(int util_vector){

    int i;

    for(i=0; i<util_vector; i++){
        printf("Introduce el valor de la %d componente: ", i+1);
        scanf("%d", &util_vector[i]);
    }
}

int Invertir_Vector(int util_vector){

    int i;

    for(i=util_vector-1; i>=0; i--){
        printf("{%d\t}", util_vector[i]);
    }
}
