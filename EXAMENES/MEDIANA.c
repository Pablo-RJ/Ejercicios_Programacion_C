#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX_VECTOR 100

/*********************************************************************/
/*                            PROTOTIPADO                            */
/*********************************************************************/
void Pedir_Elementos_Vector(int vector[], int util_vector);
void Ordenar_Vector(int vector[], int util_vector);
void Averiguar_Mediana_Vector(int vector[], int util_vector);
/*********************************************************************/
/*                         PROGRAMA PRINCIPAL                        */
/*********************************************************************/
int main(){
    
    int vector[TAM_MAX_VECTOR], util_vector;

    printf("Introduce el numero de elementos del vector: ");
    scanf("%d", &util_vector);

    Pedir_Elementos_Vector(vector, util_vector);
    Ordenar_Vector(vector, util_vector);
    Averiguar_Mediana_Vector(vector, util_vector);

    return(0);
}
/*********************************************************************/
/*                             FUNCIONES                             */
/*********************************************************************/
void Pedir_Elementos_Vector(int vector[], int util_vector){

    int i;

    for(i=0; i<util_vector; i++){
        printf("Introduce el elemento %d del vector: ", i+1);
        scanf("%d", &vector[i]);
    }

    printf("\nEl vector inicial es:\n");
    for(i=0; i<util_vector; i++){
        printf("%d\t", vector[i]);
    }
}


void Ordenar_Vector(int vector[], int util_vector){

    int i, ordenado, aux;

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
    }while(ordenado==0);

    printf("\nEl vector ordenador es:\n");
    for(i=0; i<util_vector; i++){
        printf("%d\t", vector[i]);
    }

}


void Averiguar_Mediana_Vector(int vector[], int util_vector){

    int contador;
    float mediana;

    contador = util_vector;

    if(contador%2 == 0){
        printf("\nNuestro vector es par:\n");
        printf("\n%d", vector[(util_vector/2)]); 
        printf("\n%d", vector[((util_vector)/2)-1]);
        mediana = ( vector[(util_vector/2)] + vector[((util_vector)/2)-1] ) / 2;
        printf("\nLa mediana de nuestro vector es: %f", mediana);
    }else{
        printf("\nNuestro vector es impar:");
        printf("\nLa mediana de nuestro vector es: %d", vector[util_vector/2]);
    }
}