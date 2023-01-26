/* EJERCICIO 29 - TEMA 4 */

/*Calcular la suma de dos matrices. Considerar aquellos casos en los que tiene sentido la operaci ́on.*/

#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX_VECTOR 100
/*******************************************************************************************************/
/*                                      CABECERAS O PROTOTIPADO                                        */
/*******************************************************************************************************/
void Pedir_Componentes_Matriz(int matriz[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int util_fil_matriz, int util_col_matriz);
void Imprimir_Matriz(int matriz[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int util_fil_matriz, int util_col_matriz);
void Suma_Matrices(int matriz_uno[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int matriz_dos[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int util_fil_matriz_uno, int util_col_matriz_uno, int util_fil_matriz_dos, int util_col_matriz_dos);
/*******************************************************************************************************/
/*                                       PROGRAMA PRINCIPAL                                            */
/*******************************************************************************************************/
int main(){

    int matriz_uno[TAM_MAX_VECTOR][TAM_MAX_VECTOR], matriz_dos[TAM_MAX_VECTOR][TAM_MAX_VECTOR];
    int util_fil_matriz_uno, util_col_matriz_uno, util_fil_matriz_dos, util_col_matriz_dos;

    printf("MATRIZ UNO:\n");
    Numero_Componentes_Matriz(matriz_uno, &util_fil_matriz_uno, &util_col_matriz_uno);
    printf("MATRIZ DOS:\n");
    Numero_Componentes_Matriz(matriz_dos, &util_fil_matriz_dos, &util_col_matriz_dos);

    Pedir_Componentes_Matriz(matriz_uno, util_fil_matriz_uno, util_col_matriz_uno);
    Imprimir_Matriz(matriz_uno, util_fil_matriz_uno, util_col_matriz_uno);
    Pedir_Componentes_Matriz(matriz_dos, util_fil_matriz_dos, util_col_matriz_dos);
    Imprimir_Matriz(matriz_dos, util_fil_matriz_dos, util_col_matriz_dos);

    Suma_Matrices(matriz_uno[TAM_MAX_VECTOR][TAM_MAX_VECTOR], matriz_dos[TAM_MAX_VECTOR][TAM_MAX_VECTOR], util_fil_matriz_uno, util_col_matriz_uno, util_fil_matriz_dos, util_col_matriz_dos);

    return(0);
}
/*******************************************************************************************************/
/*                                            FUNCIONES                                                */
/*******************************************************************************************************/
void Numero_Componentes_Matriz(int matriz[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int *util_fil_matriz, int *util_col_matriz){

    printf("Introduce el numero de filas: ");
    scanf("%d", &util_fil_matriz);
    printf("Introduce el numero de columnas: ");
    scanf("%d", &util_col_matriz);
}

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

void Suma_Matrices(int matriz_uno[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int matriz_dos[TAM_MAX_VECTOR][TAM_MAX_VECTOR], int util_fil_matriz_uno, int util_col_matriz_uno, int util_fil_matriz_dos, int util_col_matriz_dos){

    int i, j, suma[TAM_MAX_VECTOR][TAM_MAX_VECTOR];

    if((util_fil_matriz_uno == util_fil_matriz_dos)&&(util_col_matriz_uno == util_col_matriz_dos)){
        for(i=0; i<util_fil_matriz_uno; i++){
            for(j=0; j<util_col_matriz_uno; j++){
                suma[i][j] = matriz_uno[i][j] + matriz_dos[i][j];
            }
        }
    }else{
        printf("\nLa suma no se puede realizar ya que las dimensiones de las matrices son diferentes");
    }
} 