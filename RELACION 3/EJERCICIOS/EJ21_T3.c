/* EJERCICIO 21 - TEMA 3 */

/* Realizar un programa que pida numeros enteros hasta que se introduzca el cero. El programa debe sumar
todos los numeros pares y los numeros impares para al finalizar mostrar estas sumas. */

#include <stdio.h>

void suma_pares(int numero, int*pares);
void suma_impares(int numero, int*impares);

int main(){

    int numero, pares=0, impares=0;

    do{
        printf("Introduzca un numero natural cualquiera: ");
        scanf("%d", &numero);
        suma_pares(numero, &pares);
        suma_impares(numero, &impares);
    }while(numero!=0);

    printf("\n La suma total de numeros pares es igual a %d y la suma de numeros impares es %d", pares, impares);
    return(0);
}

void suma_pares(int numero, int*pares){
    if(numero%2==0){
        *pares = *pares + numero;
    }
}
void suma_impares(int numero, int*impares){
    if(numero%2!=0){
        *impares = *impares + numero;
    }
}