/* EJERCICIO 26 -TEMA 4 */

/*Realizar un programa modular que rellene una matriz bidimensional 7X5 de enteros con datos aleatorios
e imprima por pantalla el numero mayor y menor de la matriz y sus posiciones (fila y columna).*/

#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX_VECTOR 100
/*******************************************************************************************************/
/*                                      CABECERAS O PROTOTIPADO                                        */
/*******************************************************************************************************/
void Rellenar_Componentes_Aleatorios_Matriz(int matriz[7][5]);
void Imprimir_Matriz(int matriz[7][5]);
void Componente_Mayor_Matriz(int matriz[7][5]);
void Componente_Menor_Matriz(int matriz[7][5]);
/*******************************************************************************************************/
/*                                       PROGRAMA PRINCIPAL                                            */
/*******************************************************************************************************/
int main(){

    int matriz[7][5];

    Rellenar_Componentes_Aleatorios_Matriz(matriz);

    Imprimir_Matriz(matriz);

    Componente_Mayor_Matriz(matriz);

    Componente_Menor_Matriz(matriz);

    return(0);
}
/*******************************************************************************************************/
/*                                            FUNCIONES                                                */
/*******************************************************************************************************/
void Rellenar_Componentes_Aleatorios_Matriz(int matriz[7][5]){

    int i, j;

    srand(time(NULL));
    for(i=0; i<7; i++){
        for(j=0; j<5; j++){
            matriz[i][j] = rand()%1000;
        }
    }
}

void Imprimir_Matriz(int matriz[7][5]){

    int i, j;

    for(i=0; i<7; i++){
        for(j=0; j<5; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    } 
}

void Componente_Mayor_Matriz(int matriz[7][5]){

    int i, j, mayor=matriz[0][0];

    for(i=0; i<7; i++){
        for(j=0; j<5; j++){
            if(matriz[i][j] > mayor){
                mayor = matriz[i][j];
            }
        }
    }
    printf("\nEl elemento mayor de la matriz es: %d", mayor);
}

void Componente_Menor_Matriz(int matriz[7][5]){

    int i, j, menor=matriz[0][0];

    for(i=0; i<7; i++){
        for(j=0; j<5; j++){
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
            }
        }
    }
    printf("\nEl elemento menor de la matriz es: %d", menor);
}