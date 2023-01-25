/* EJERCICIO 12 - TEMA 4 */

/*Construir una funcion que ordene alfabeticamente un vector de cadenas de caracteres.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM_MAX_VECTOR 100

/*******************************************************************************/
/*                           CABECERAS O PROTOTIPADO                           */
/*******************************************************************************/
/*******************************************************************************/
/*                              PROGRAMA PRINCIPAL                             */
/*******************************************************************************/
int main(){

    char cadena[TAM_MAX_VECTOR];
    
    Pedir_Cadena_Caracteres(cadena);

    printf("La cadena inicial es:\n");
    Imprimir_Cadena_Caracters(cadena);

    Ordenar_Cadena_Caracteres(cadena);

    printf("La cadena final ordenada es:");
    Imprimir_Cadena_Caracters(cadena);

    return(0);
}
/*******************************************************************************/
/*                                  FUNCIONES                                  */
/*******************************************************************************/
void Pedir_Cadena_Caracteres(char cadena[]){

    printf("Introduce una cadena de caracteres: ");
    fgets(cadena, TAM_MAX_VECTOR, stdin);
}

void Imprimir_Cadena_Caracters(char cadena[]){

    puts(cadena);
}

void Ordenar_Cadena_Caracteres(char cadena[]){

    int util_cadena, i, j, aux;
    util_cadena = strlen(cadena);

    for (i=0; i<util_cadena; i++){
      cadena[i] = tolower(cadena[i]);
    }
    for (i=0; i<util_cadena; i++){
        for(j=util_cadena-1; j>i; j--){
            if((cadena[j] < cadena[j-1]) && cadena[j] != " "){
                aux = cadena[j];
                cadena[j] = cadena[j-1];
                cadena[j-1]=aux;
            }
        }
    }
}