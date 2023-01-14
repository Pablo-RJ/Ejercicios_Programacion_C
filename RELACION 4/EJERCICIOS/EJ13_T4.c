/*  EJERCICIO 13 - TEMA 4 */

/*Realizar una funcion que lea un numero natural y lo traduzca a morse.
Leyenda: - : raya (señal larga) . : punto (señal corta)
Numeros: 0 ----- 1 ·---- 2 ··--- 3 ···-- 4 ····- 5 ·····6 -····7 --···8 ---··9 ----·
Cada numero en morse se representara en C por una cadena de 5 caracteres compuesta de puntos y rayas,
segun la tabla anterior. */

#include <stdio.h>
#include <string.h>

#define TAM_VECTOR 100

int main(){

    int vector[TAM_VECTOR], util_vector, i;
    
    do{
        printf("Introduzca el tamano final del vector (entre 1 y 100): ");
        scanf("%d", &util_vector);
    }while(util_vector<1 || util_vector>100);

    for(i=0; i<util_vector; i++){
        printf("Introduzca el elemento numero %d del vector: ", i+1);
        scanf("%d", &vector[i]);
    }
    Codigo_Morse(vector, util_vector);
}

void Codigo_Morse(int vector[], int util_vector){
    int i;
    for(i=0; i<util_vector; i++){
        switch (vector[i]){
            case 0:
                printf("-----");
            break;
            case 1:
                printf(".----");
            break;
            case 2:
                printf("..---");
            break;
            case 3:
                printf("...-- ");
            break;
            case 4:
                printf("....- ");
            break;
            case 5:
                printf("..... ");
            break;
            case 6:
                printf("-.... ");
            break;
            case 7:
                printf("--... ");
            break;
            case 8:
                printf("---.. ");
            break;
            case 9:
                printf("----. ");
            break;
        }
        printf("\t");
    }
}
