/* EJERCICIO 32 - TEMA 4 */

/*Realizar una funcion que acepte una matriz de enteros y devuelva el numero de columnas  unicas de la
matriz, es decir, aquellas para las que NO existe otra columna en la matriz con los mismos valores.*/

#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX_VECTOR 100
/******************************************************************************************************************************/
/*                                                 CABECERAS Y PROTITIPADOS                                                   */
/******************************************************************************************************************************/
void Pedir_Elementos_Matriz(int matriz[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int util_fil_matriz, int util_col_matriz);
void Imprimir_Matriz(int matriz[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int util_fil_matriz, int util_col_matriz);
/******************************************************************************************************************************/
/*                                                    PROGRAMA PRINCIPAL                                                      */
/******************************************************************************************************************************/
int main(){

    int matriz[TAM_MAX_VECTOR][TAM_MAX_VECTOR], util_fil_matriz, util_col_matriz;

    printf("Introduce el tamano de filas de la matriz: ");
    scanf("%d", &util_fil_matriz);
    printf("Introduce el tamano de columnas de la matriz: ");
    scanf("%d", &util_col_matriz);

    Pedir_Elementos_Matriz(matriz, util_fil_matriz, util_col_matriz);
    Imprimir_Matriz(matriz, util_fil_matriz, util_col_matriz);
    Buscar_Columnas_Repetidas(matriz, util_fil_matriz, util_col_matriz);

    return(0);
}
/******************************************************************************************************************************/
/*                                                        FUNCIONES                                                           */
/******************************************************************************************************************************/
void Pedir_Elementos_Matriz(int matriz[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int util_fil_matriz, int util_col_matriz){

    int i, j;

    for(i=0; i<util_fil_matriz; i++){
        for(j=0; j<util_col_matriz; j++){
            printf("Introduce el elemento de la fila %d y columna %d de la matriz: ", i+1, j+1);
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

void Buscar_Columnas_Repetidas(int matrix[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int util_fil_matriz, int util_col_matriz){

    int col, row, i, j;
    int columnas_repetidas[TAM_MAX_VECTOR] = {0};

    for(col=0; col<util_col_matriz; col++){
        for(i=0; i<col; i++){
            for(row=0; row<util_fil_matriz; row++){
                if(matrix[row][i] != matrix[row][col]){
                    break;
                }
                if(row == util_fil_matriz-1){
                    columnas_repetidas[col] = 1;
                }
            }
        }
    }

    printf("Columnas no repetidas: ");
    for(i=0; i<util_col_matriz; i++){
        if(columnas_repetidas[i] == 0){
            printf("%d", i);
        }
    }

}