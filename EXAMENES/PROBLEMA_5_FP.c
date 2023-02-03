#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX_VECTOR 100

struct Punto{
    int x;
    int y;
};
/********************************************************************************************************/
/*                                       CABECERAS O POROTIPADO                                         */
/********************************************************************************************************/
void Pedir_Coordenadas_Vector(struct Punto vector[], int util_vector);
void Imprimir_Coordenadas(struct Punto vector[], int util_vector);
void Distancia_Euclidea_Coordenadas(struct Punto vector[], int distancia[], int util_vector);
void Ordenar_Coordenadas(struct Punto vector[], int distancia[], int util_vector);
/********************************************************************************************************/
/*                                         PROGRAMA PRINCIPAL                                           */
/********************************************************************************************************/
int main(){

    struct Punto vector[TAM_MAX_VECTOR];
    int util_vector;
    int distancia[TAM_MAX_VECTOR];

    do{
        printf("Introduzca el numero de pares de coordenadas: ");
        scanf("%d", &util_vector);
    }while(util_vector<1 || util_vector>100);

    Pedir_Coordenadas_Vector(vector, util_vector);
    printf("Las coordenadas introducidos son:\n");
    Imprimir_Coordenadas(vector, util_vector);

    Distancia_Euclidea_Coordenadas(vector, distancia, util_vector);

    Ordenar_Coordenadas(vector, distancia, util_vector);
    printf("\nLas coordenadas introducidas ordenadas segun su distancia euclidea son:\n");
    Imprimir_Coordenadas(vector, util_vector);

    return(0);
}
/********************************************************************************************************/
/*                                              FUNCIONES                                               */
/********************************************************************************************************/
void Pedir_Coordenadas_Vector(struct Punto vector[], int util_vector){

    int i;

    printf("Introduce la coordenada X e Y respectivamente:\n");
    for(i=0; i<util_vector; i++){
        printf("%d: ", i+1);
        scanf("%d %d", &vector[i].x, &vector[i].y);
    }
}

void Imprimir_Coordenadas(struct Punto vector[], int util_vector){

    int i;

    for(i=0; i<util_vector; i++){
        printf("%d %d\n", vector[i].x, vector[i].y);
    }
}

void Distancia_Euclidea_Coordenadas(struct Punto vector[], int distancia[], int util_vector){

    int i;

    for(i=0; i<util_vector; i++){
        distancia[i] = ((pow(vector[i].x, 2)) + (pow(vector[i].y, 2)));
    }
}

void Ordenar_Coordenadas(struct Punto vector[], int distancia[], int util_vector){

    int i, ordenado;
    struct Punto aux;

    for(i=0; i<util_vector-1; i++){
        if(distancia[i] > distancia[i+1]){
            aux = vector[i+1];
            vector[i+1] = vector[i];
            vector[i] = aux;
        }
    }
}
