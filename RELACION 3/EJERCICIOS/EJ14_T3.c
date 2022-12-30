/* EJERCICIO 14 - TEMA 3 */

/* Escribir una funcion que calcule el producto de la primera y de la ultima cifra de un numero entero recibido como argumento. */

#include <stdio.h>
#include <math.h>

int producto_primera_por_ultima(int numero){
    
    numero = fabs(numero);
    int primera_cifra, ultima_cifra, resultado;

    primera_cifra = numero;

    if(numero>10){
        do{
            primera_cifra = primera_cifra / 10;
        }while(primera_cifra>10);
            ultima_cifra = numero % 10;
            resultado = primera_cifra * ultima_cifra;
    }else{
        numero = resultado;
    }
    return(resultado);
}

int main(){

    int numero;

    printf("Introduce un numero natural cualquiera: ");
    scanf("%d", &numero);

    printf("El producto de la primera cifra por la ultima cifra de %d es %d", numero, producto_primera_por_ultima(numero));

    return(0);
}

