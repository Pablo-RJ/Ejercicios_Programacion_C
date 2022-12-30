/* PROBLEMA 3.1.6 - POTENCIA DE UN NUMERO(VERSION RECURSIVA) */

/*Se pretende realizar la operacion de potenciacion b^exp, sinedo exp un numero natual 
y b un numero real. Para ello:

1) Cree una funcion que reciba la base y el exponente y devuelva la base b^exponente, sin usar la libreia 
de funciones matematicas

2) Cree un programa que pida por teclado la base y el exponente y muestre por pantalla el valor de la 
expresion base^exponente, usando la funcion anterior*/

#include <stdio.h>

double potencia(double x, int exp);

int main(){

    double resultado, x;
    char c;
    int n;

    printf("Introduzca la base y el exponente: \t");
    scanf("%lf %d", &x, &n);

    resultado = potencia(x, n);
    printf("\nResultado %lf", resultado);

    return(0);
}

double potencia(double x, int exp){

    double resultado = 1;

    if(exp==0)
        resultado = 1;
    else
    resultado = resultado * x * potencia(x, exp-1);
}

//TODO: Terminar ejercicio