/* EJERCICIO 27 - TEMA 4 */

/*Construir una funcion para comprobar si dos matrices son iguales.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM_MAX_VECTOR 100
/*******************************************************************************************************/
/*                                      CABECERAS O PROTOTIPADO                                        */
/*******************************************************************************************************/
void Pedir_Componentes_Matriz(int matriz[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int util_fil_matriz, int util_col_matriz);
void Imprimir_Matriz(int matriz[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int util_fil_matriz, int util_col_matriz);
int Comparar_Matrices(int matriz_uno[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int matriz_dos[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int util_fil_matriz, int util_col_matriz);
/*******************************************************************************************************/
/*                                       PROGRAMA PRINCIPAL                                            */
/*******************************************************************************************************/
int main(){

    int matriz_uno[TAM_MAX_VECTOR][TAM_MAX_VECTOR], matriz_dos[TAM_MAX_VECTOR][TAM_MAX_VECTOR], util_fil_matriz, util_col_matriz;

    printf("Introduce el numero de filas de las matrices: ");
    scanf("%d", &util_fil_matriz);
    printf("Introduce el numero de columnas de las matrices: ");
    scanf("%d", &util_col_matriz);
    
    printf("PRIMERA MATRIZ:\n");
    Pedir_Componentes_Matriz(matriz_uno, util_fil_matriz, util_col_matriz);
    Imprimir_Matriz(matriz_uno, util_fil_matriz, util_col_matriz);
    printf("SEGUNDA MATRIZ:\n");
    Pedir_Componentes_Matriz(matriz_dos, util_fil_matriz, util_col_matriz);
    Imprimir_Matriz(matriz_dos, util_fil_matriz, util_col_matriz);

    if(Comparar_Matrices(matriz_uno, matriz_dos, util_fil_matriz, util_col_matriz) == 1){
        printf("\nAmbas matrices son iguales");
    }else{
        printf("\nLas amtrices introducidas son distintas");
    }

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

int Comparar_Matrices(int matriz_uno[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int matriz_dos[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int util_fil_matriz, int util_col_matriz){

    int i, j, igualdad;

    igualdad = 1;
    for(i=0; i<util_fil_matriz; i++){
        for(j=0; j<util_col_matriz; j++){
            if(matriz_uno[i][j] != matriz_dos[i][j])
            igualdad = 0;
        }
    }

    return(igualdad);
}