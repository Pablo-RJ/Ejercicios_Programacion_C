/* EJERCICIO 28 - TEMA 4 */

/*Construir una funcion para comprobar si dos matrices son iguales.*/

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

    int matriz[TAM_MAX_VECTOR][TAM_MAX_VECTOR], util_fil_matriz, util_col_matriz;

    printf("Introduce el numero de filas de las matrices: ");
    scanf("%d", &util_fil_matriz);
    printf("Introduce el numero de columnas de las matrices: ");
    scanf("%d", &util_col_matriz);

    Pedir_Componentes_Matriz(matriz, util_fil_matriz, util_col_matriz);
    Imprimir_Matriz(matriz, util_fil_matriz, util_col_matriz);


    if(Matriz_Simetrica(matriz, util_fil_matriz, util_col_matriz) == 1){
        printf("La matriz introducida SI es SIMETRICA");
    }else{
        printf("La matriz introducida NO es SIMETRICA");
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

int Matriz_Simetrica(int matriz[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int util_fil_matriz, int util_col_matriz){

    int i, j, simetrica;

    simetrica = 1;

    if(util_fil_matriz != util_col_matriz){
        simetrica = 0;
    }

    for(i=0; (i<util_fil_matriz-1)&&simetrica; i++){
        for(j=i+1; j<util_fil_matriz; j++){
            if(matriz[i][j] != matriz[j][i]){
                simetrica = 0;
            }
        }
    }
    return(simetrica);
}