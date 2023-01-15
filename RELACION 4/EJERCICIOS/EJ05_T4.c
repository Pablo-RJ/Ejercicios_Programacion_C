#include <stdio.h>
#include <stdlib.h>
/*Se define una constante TAM_MAX_VECTOR para establecer un límite en el tamaño del vector.*/
#define TAM_MAX_VECTOR 100
/*Se definen las funciones que serán utilizadas (prototipado) en el programa: Eliminar_Repetidos(), Pedir_Vector(), Imprimir_Vector().*/
void Eliminar_Repetidos(int *vector, int *util_vector);
void Pedir_Vector(int *vector, int *util_vector);
void Imprimir_Vector(int *vector, int util_vector);
/*Se define la función principal del programa main(). Se declara un vector de enteros con el tamaño máximo establecido en TAM_MAX_VECTOR y una variable util_vector que almacena el tamaño utilizado del vector.*/
int main(){

    int vector[TAM_MAX_VECTOR], util_vector;
/*Se llama a la función Pedir_Vector() para pedir al usuario que introduzca los elementos del vector y almacenarlos en el vector declarado anteriormente.*/
    Pedir_Vector(vector, &util_vector);
    printf("El vector inicial es:\n");
/*Se imprime el vector inicial.*/ 
    Imprimir_Vector(vector, util_vector);
/*Se llama a la función Eliminar_Repetidos() para eliminar los elementos repetidos del vector*/
    Eliminar_Repetidos(vector, &util_vector);
/*Se imprime el vector final sin elementos repetidos.*/
    printf("\nEl vector final es:\n");
    Imprimir_Vector(vector, util_vector);

    return(0);
}
/*La función Pedir_Vector() se encarga de pedir al usuario que introduzca el tamaño del vector y los elementos del mismo.*/
void Pedir_Vector(int *vector, int *util_vector){

    int i;

    printf("Introduzca el numero de componentes del vector (maximo 100): ");
    scanf("%d", util_vector);

    for(i=0; i<*util_vector; i++){
        printf("Introduce el elemento numero %d del vector: ", i+1);
        scanf("%d", &vector[i]);
    }
}
/*La función Imprimir_Vector() se encarga de imprimir los elementos del vector.*/
void Imprimir_Vector(int *vector, int util_vector){

    int i;

    for(i=0; i<util_vector; i++){
        printf("%d\t", vector[i]);
    }
}
/*La función Eliminar_Repetidos() se encarga de comparar cada elemento del vector con los demás elementos y eliminar los repetidos mediante el desplazamiento de los elementos del vector.*/
void Eliminar_Repetidos(int *vector, int*util_vector){

    int i, j, k;
/*Se utilizan dos ciclos anidados para recorrer el vector y comparar cada elemento con los demás elementos del vector. El primer ciclo recorre
el vector desde la posición 0 hasta la posición util_v, y el segundo ciclo recorre desde la posición siguiente a la posición actual del primer ciclo hasta la posición util_v.*/
    for(i=0; i<*util_vector; i++){
        for(j=i+1; j<*util_vector; j++){
/*Si el elemento actual del primer ciclo i es igual al elemento actual del segundo ciclo j, entonces se procede a eliminar ese elemento del vector.*/
            if(vector[i] == vector[j]){
/*Se utiliza un tercer ciclo para desplazar los elementos del vector a la izquierda, reemplazando el elemento repetido con el siguiente elemento del vector.*/
                for(k=j; k<*util_vector-1; k++){
                    vector[k] = vector[k+1];
                }
/*Se decrementa el tamaño utilizado del vector y se decrementa la posición del segundo ciclo para volver a comparar el elemento recién desplazado con los elementos restantes.*/
                (*util_vector)--;
                j--;
            }
        }
    }
}
