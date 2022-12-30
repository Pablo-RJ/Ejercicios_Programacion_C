/* EJERCICIO 14 - TEMA 2 */

/* Realizar un programa que lea numeros enteros desde teclado hasta que se introduzcan 10 numeros o hasta
que se introduzca un numero negativo e imprima la media de los numeros introducidos (el numero negativo
se considera un valor de parada y no se debe tener en cuenta para realizar la media) */

#include <stdio.h>

int main(){

    int i;
    float media, suma, numero;

    for(i=1; i<=10; i++){
        printf("Introduce un numero entero cualquiera: ");
        scanf("%d", &numero);
        
        if(numero<0){
            suma = suma;
            media = suma / i;
            printf("\nLa media de los numeros antes del ultimo introducido (negativo) es igaul a %f", media);
            system("break");
        }else{
            suma = suma + numero;
            media = suma / i;
        }
    }
    printf("\nLa media de los numeros introducidos es igual a %f", media);
}