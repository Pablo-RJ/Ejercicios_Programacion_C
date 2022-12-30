/* EJERCICIO 6 - TEMA 3 */

/* Implemente una funcion en C con un argumento de tipo caracter que:
si el argumento es una letra en mayuscula, devuelve su correspondiente letra en minuscula,
si el argumento no es una letra mayuscula, devuelve el mismo argumento */

#include <stdio.h>
#include <ctype.h>

int Minuscula(char letra){

    char letra_devuelta;

    if(letra == toupper(letra)){
        letra_devuelta = tolower(letra);
    }else{
        letra_devuelta = letra;
    }
    return(letra_devuelta);
}

int main(){

    char letra;

    printf("Introduzca una letra cualquiera: ");
    scanf("%c", &letra);

    letra= Minuscula(letra);

    printf("\nLa letra minuscula de la letra introducida es '%c'", letra);

    return(0);
}
