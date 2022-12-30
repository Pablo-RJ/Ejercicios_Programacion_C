/* Calcular el factoral de dos numeros con una funcion*/

#include <stdio.h>

int factorial(int a);

int main(){

    int x, y, fact1, fact2;

    printf("Introduce el primer numero para calcular su factorial: ");
    scanf("%i", &x);
    printf("Introduce el segundo numero para calcular su factorial: ");
    scanf("%i", &y);

    fact1 = factorial(x);
    fact2 = factorial(y);

    printf("\nEl factorial de %i es igual a %i", x, fact1);
    printf("\nEl factorial de %i es igual a %i", y, fact2);
    return(0);
}

int factorial(int a){

    int i, aux=1;

    for(i=1; i<=a; i++){
        aux = aux * i;
    }


    return(aux);
}