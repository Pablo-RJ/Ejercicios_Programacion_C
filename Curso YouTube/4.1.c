/* Calcular el numero mayor entres dos numeros con una funcion*/

#include <stdio.h>

int maxima();

int main(){

    int x, y, max;

    x = 3;
    y = 10;
    
    max = maximo(x, y);

    printf("El valor maximo es %i", max);
    return(0);
}

int maximo(int a, int b){
    
    int aux;

    if(a>b){
        aux = a;
    }else{
        aux = b;
    }
    return(aux);
}