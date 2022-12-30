/* EJERCICIO 28 - TEMA 3 */

/* Crear un programa que encuentre el maximo comun divisor de dos numeros usando el algoritmo recursivo de Euclides : Dado dos numeros enteros positivos m y n, tal que
m > n, para encontrar su maximo comun divisor, es decir, el mayor entero positivo que divide a ambos */

#include <stdio.h>

int maximo_comun_divisor(int m, int n);

int main(){

    int a, b, mcd;

    do{
        printf("Introduzca el primer numero: ");
        scanf("%d", &a);
        printf("Introduzca el segundo numero: ");
        scanf("%d", &b);
    }while((a<=0)||(b<=0));

    if(a>b){
        mcd = maximo_comun_divisor(a, b);
    }else{
        mcd = maximo_comun_divisor(b, a);
    }
    printf("\nEl Maximo Comun Divisor de %d y %d es %d", a, b, mcd);
    
    return(0);
}

int maximo_comun_divisor(int m, int n){

    int mcd, resto;

    resto = m % n;
    if(resto==0){
        mcd = n;
    }else{
        mcd = maximo_comun_divisor(n, resto);
    }
    return(mcd);
}