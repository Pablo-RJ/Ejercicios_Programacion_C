/* EJERCICIO 30 - TEMA 4 */

/*Calcular el producto de dos matrices A y B, suponiendo que A tiene m filas y n columnas y B tiene n
filas y m columnas.*/

#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX_VECTOR 100
/*******************************************************************************************************/
/*                                      CABECERAS O PROTOTIPADO                                        */
/*******************************************************************************************************/
void Pedir_Componentes_Matriz(int matriz[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int util_fil_matriz, int util_col_matriz);
void Imprimir_Matriz(int matriz[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int util_fil_matriz, int util_col_matriz);
int Matriz_Simetrica(int matriz[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int util_fil_matriz, int util_col_matriz);
/*******************************************************************************************************/
/*                                       PROGRAMA PRINCIPAL                                            */
/*******************************************************************************************************/
int main(){

    int matriz_uno[TAM_MAX_VECTOR][TAM_MAX_VECTOR], matriz_dos[TAM_MAX_VECTOR][TAM_MAX_VECTOR], util_fil_matriz, util_col_matriz;

    printf("Introduce el numero de filas de las matrices: ");
    scanf("%d", &util_fil_matriz);
    printf("Introduce el numero de columnas de las matrices: ");
    scanf("%d", &util_col_matriz);

    Pedir_Componentes_Matriz(matriz_uno, util_fil_matriz, util_col_matriz);
    Imprimir_Matriz(matriz_uno, util_fil_matriz, util_col_matriz);
    Pedir_Componentes_Matriz(matriz_dos, util_col_matriz, util_fil_matriz);
    Imprimir_Matriz(matriz_dos, util_col_matriz, util_fil_matriz);

    Multiplicar_Matrices(matriz_uno, matriz_dos, util_fil_matriz, util_col_matriz); 

    return(0);
}
/*******************************************************************************************************/
/*                                            FUNCIONES                                                */
/*******************************************************************************************************/
void Pedir_Componentes_Matriz(int matriz[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int util_fil_matriz, int util_col_matriz){
    
    int i, j;

    for(i=0; i<util_fil_matriz; i++){
        for(j=0; j<util_col_matriz; j++){
            printf("Introduce el elemento de la fila %d y la columna %d de la matriz: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void Imprimir_Matriz(int matriz[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int util_fil_matriz, int util_col_matriz){

    int i, j;

    for(i=0; i<util_fil_matriz; i++){
        for(j=0; j<util_col_matriz; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void Multiplicar_Matrices(int matriz_uno[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int matriz_dos[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int util_fil_matriz, int util_col_matriz){

    int i, j, k, suma, producto[TAM_MAX_VECTOR][TAM_MAX_VECTOR];

    for(i=0; i<util_fil_matriz; i++){
        for(j=0; j<util_fil_matriz; j++){
            suma = 0;
            for(k=0; k<util_col_matriz; k++){
                suma = suma + matriz_uno[i][k] * matriz_dos[k][j];
            }
            producto[i][j] = suma;
        }
    }

    printf("\nSolucion del producto de ambas matrices:\n");
    Imprimir_Matriz(producto, util_fil_matriz, util_col_matriz);
}