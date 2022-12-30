/* EJERCICIO 13 - TEMA 3 */

/* Hacer una funcion reciba un numero entero y que devuelva el numero de cifras que este numero entero tiene. */

#include <stdio.h>

int contar_digitos(int numero){

    int contador = 0, resto;

    while(numero>0){
        resto = numero % 10;
        contador++;
        numero = numero / 10;
    }
    return(contador);
}

int main(){

    int numero;

    printf("Introduce un numero natural cualquiera: ");
    scanf("%d", &numero);

    printf("El numero de cifras de %d es '%d'", numero, contar_digitos(numero));
    
    return(0);
}