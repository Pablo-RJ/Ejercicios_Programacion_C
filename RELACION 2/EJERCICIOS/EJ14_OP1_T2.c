/* EJERCICIO 14 - TEMA 2 */

/* Realizar un programa que lea numeros enteros desde teclado hasta que se introduzcan 10 numeros o hasta
que se introduzca un numero negativo e imprima la media de los numeros introducidos (el numero negativo
se considera un valor de parada y no se debe tener en cuenta para realizar la media). */

#include <stdio.h>

int main(){

    int numero, contador=0, i;
    float suma=0, media=0;

    for(i=0; i<10; i++){
        printf("Introduce numeros enteros:\n");
        scanf("%d", &numero);
        if(numero<0){
            break;
        }else{
            suma = suma + numero;
            contador++;
        }
    }

    if(contador>0){ 
        media = suma / contador;
        printf("\nLa media de los numeros introducidos es %.2f", media);
    }else{
        printf("No se ha introducido ningún número\n");
    }

    return(0);
}