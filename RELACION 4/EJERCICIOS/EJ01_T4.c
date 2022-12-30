/* EJERCICIO 1 - TEMA 4 */

/* Escribir una definicion apropiada de vectores para cada uno de los siguientes problemas:

a ) Definir un vector de 12 componentes enteros llamado vector. Asignar los valores 1, 4, 7, 10,
. . . , 34 a los elementos del vector.

b) Definir un vector de cuatro caracteres llamado letras. Asignar los valores ’H’, ’o’, ’l’, 
’a’ a las componentes del vector.

c) Definir un vector de 6 elementos llamado Valor. Asignar los valores 1, 1/2, ...., 1/6
6 a los elementos del vector*/

#include <stdio.h>

int main(){

    int vector[12] = {1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31, 34};
    char letras[] = {'H', 'o', 'l', 'a'};
    float vector[6] = {1, 1/2, 1/3, 1/4, 1/5, 1/6};

    return(0);
}