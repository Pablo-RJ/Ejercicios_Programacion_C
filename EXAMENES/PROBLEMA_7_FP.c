#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX_FIL_MATRIZ 100
#define TAM_MAX_COL_MATRIZ 100
/*******************************************************************************************/
/*                                 CABECERAS O PROTOTIPADO                                 */
/*******************************************************************************************/
/*******************************************************************************************/
/*                                   PROGRAMA PRINCIPAL                                    */
/*******************************************************************************************/
int main(){

    int matriz[TAM_MAX_FIL_MATRIZ][TAM_MAX_COL_MATRIZ], util_fil, util_col;
    float media[TAM_MAX_COL_MATRIZ];

    do{
        printf("Introduzca el numero de filas de la matriz: ");
        scanf("%d", &util_fil);
        printf("Introduzca el numero de columnas de la matriz: ");
        scanf("%d", &util_col);
    }while((util_fil<1||util_fil>100) || (util_col<1||util_col>100));

    Pedir_Componentes_Matriz(matriz, util_fil, util_col);
    printf("La matriz inicial es:\n");
    Imprimir_Matriz(matriz, util_fil, util_col);

    Media_Columnas_Matriz(matriz, media, util_fil, util_col);

    Ordenar_Columnas_Matriz(matriz, media, util_fil,util_col);
    printf("\nLa matriz inicial ordenada de menor a mayor segun la media de sus columnas es:\n");
    Imprimir_Matriz(matriz, util_fil, util_col);

    return(0);

}
/*******************************************************************************************/
/*                                        FUNCIONES                                        */
/*******************************************************************************************/
void Pedir_Componentes_Matriz(int matriz[][TAM_MAX_COL_MATRIZ], int util_fil, int util_col){

    int i, j;

    for(i=0; i<util_fil; i++){
        for(j=0; j<util_col; j++){
            printf("Introduzca el elemento de la fila %d y la columna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void Imprimir_Matriz(int matriz[][TAM_MAX_COL_MATRIZ], int util_fil, int util_col){

    int i, j;

    for(i=0; i<util_fil; i++){
        for(j=0; j<util_col; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void Media_Columnas_Matriz(int matriz[][TAM_MAX_COL_MATRIZ], float media[], int util_fil, int util_col){
    
    int i, j;

    for(j=0; j<util_col; j++){
        media[j] = 0;
        for(i=0; i<util_fil; i++){
            media[j] = media[j] + matriz[i][j];
        }
        media[j] = media[j] / util_fil;
    }

    printf("\nLa media de cada columna de la matriz inicial es:\n");
    for(j=0; j<util_col; j++){
        printf("%.2f\t", media[j]);
    }
}

void Ordenar_Columnas_Matriz(int matriz[][TAM_MAX_COL_MATRIZ], float media[], int util_fil, int util_col){

    int i, j, aux, ordenado;

    do{
        ordenado = 1;
        for(j=0; j<util_col-1; j++){
            if(media[j] > media[j+1]){
                aux = media[j+1];
                media[j+1] = media[j];
                media[j] = aux;
                ordenado = 0;

                for(i=0; i<util_fil; i++){
                    aux = matriz[i][j+1];
                    matriz[i][j+1] = matriz[i][j];
                    matriz[i][j] = aux;
                }
            }
        }
    }while(ordenado==0);
}
