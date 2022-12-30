/* EJERCICIO 13 - TEMA 3 */

/* Hacer una funcion reciba un numero entero y que devuelva el numero de cifras que este numero entero tiene. */

#include <stdio.h>
#include <math.h>

int numero_de_cifras(int n){

    n = fabs(n);
    int i = 1;
    int cifras = 0;

     do{
        if(n / i >= 1 || n == 0){
            cifras++;
            i = i*10;
        }
     }while(n >= i);

     return cifras;
}

int main(){

    int n;

    printf("Introduce un numero entero: ");
    scanf("%d", &n);

    printf("El numero de cifras de %d es %d", n, numero_de_cifras(n));

}