#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_MAX_CADENA 100

/********************************************************************************************************/
/*                                       CABECERAS O POROTIPADO                                         */
/********************************************************************************************************/

/********************************************************************************************************/
/*                                         PROGRAMA PRINCIPAL                                           */
/********************************************************************************************************/
int main(){

    char cadena[TAM_MAX_CADENA];
    int util_cadena;
    int palindromo;

    Pedir_Caracteres_Cadena(cadena, &util_cadena);
    printf("\nLa cadena introducida incicialmente es:\n");
    Imprimir_Cadena(cadena, &util_cadena);

    Eliminar_Espacios_Cadena(cadena, &util_cadena);
    printf("\n\nLa cadena introducida incicialmente sin espacios en blanco y en mayuscula es:\n");
    Imprimir_Cadena(cadena, &util_cadena);

    palindromo = Estudiar_Cadena(cadena, &util_cadena);

    if(palindromo == 1){
        printf("\n\nLa frase introducida ES un PALINDROMO");
    }else{
        printf("\nLa frase introducida NO es un PALINDROMO");
    }

    return(0);
}
/********************************************************************************************************/
/*                                              FUNCIONES                                               */
/********************************************************************************************************/
void Pedir_Caracteres_Cadena(char cadena[], int *util_cadena){
    
    printf("Introduce la cadena de caracteres: ");
    gets(cadena);

    (*util_cadena) = strlen(cadena);
}

void Imprimir_Cadena(char cadena[], int *util_cadena){

    printf("%s", cadena);
    printf("\n%d", *util_cadena);
}

void Eliminar_Espacios_Cadena(char cadena[], int *util_cadena){

    int i, j = 0;

    cadena = strupr(cadena);

    for(i = 0; i < *util_cadena; i++){
        if(cadena[i] != 'A'){
            cadena[j++] = cadena[i];
        }
    }
    *util_cadena = j;
    cadena[j] = '\0';
}

int Estudiar_Cadena(char cadena[], int *util_cadena){

    int i, j, palindromo = 1;

    for(i=0; i < *util_cadena; i++){
        if (cadena[i] != cadena[(*util_cadena-1)-i]){
            palindromo = 0;
            break;
        }
    }

    return(palindromo);
}