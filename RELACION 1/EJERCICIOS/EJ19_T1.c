/* EJERCICIO 19 - TEMA 1 */

/* Dos locomotoras parten de puntos distintos en direccion contraria tal y como indica la figura. Se pide redactar un programa para
conocer las distancias que habran recorrido ambas locomotoras antes de que choquen teniendo en cuenta que la primera locomotora viaja
a una velocidad constante V1, que la segunda viaja a una velocidad constante V2, y que la distancia inicial entre ambas ed D. La formula
que relaciona espacio, velocidad y tiempo (e = v t) y el momento en que se producira el choque viene dado por la formula*/

#include <stdio.h>

int main(){

    float velocidad_1, velocidad_2, distancia, espacio_1, espacio_2, tiempo;

    printf("Introduzca la velocidad de la locomotora 1 (m/s): ");
    scanf("%f", &velocidad_1);
    printf("Introduzca la velocidad de la locomotora 2 (m/s): ");
    scanf("%f", &velocidad_2),
    printf("Introduzca la distancia que separa a ambas locomotoras (m): ");
    scanf("%f", &distancia);

    tiempo = distancia / (velocidad_1+velocidad_2);
    espacio_1 = velocidad_1 * tiempo;
    espacio_2 = velocidad_2 * tiempo;

    printf("La primera locomotora habra recorrido %.2f metros mientras que la segunda locomotora habra recorrido %.2f metros", espacio_1, espacio_2);

    return(0);
}