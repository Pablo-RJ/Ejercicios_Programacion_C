/* Metodo de la burbuja */

#include <stdio.h>

int main(){

    int x, y, aux;

    printf("El valor de x es : ");
    scanf("%i", &x);
    printf("El valor de y es : ");
    scanf("%i", &y);

    aux = x;
    x = y;
    y = aux;

    printf("El valor de x es : %i", x);
    printf("\nEl valor de y es : %i", y);
}