/* EJERCICIO 20 - TEMA 3 */

/*Hacer una funcion que reciba cuatro numeros enteros que son el numerador y denominador de dos
fracciones sume estas dos fracciones y devuelva dos numeros enteros que sera el numerador y 
denominador de la fraccion suma. Hacer tambien un programa principal para ilustrar el uso de la funcion*/

#include <stdio.h>

int mayor(int a, int b);
int MCD(int a, int b);

void reducir_fraccion(int numerador, int denominador, int *numerador_salida, int *denominador_salida);
void sumar_fracciones(int numerador1, int denominador1, int numerador2, int denominador2, int *numerador_resultado, int *denominador_salida);

int main(){

    int n1, n2, n_resultado, d1, d2, d_resultado; 

    printf("Introduce un primer numerador: ");
    scanf("%d", &n1);
    printf("Introduce un primer denominador: ");
    scanf("%d", &d1);
    printf("Introduce un segundo numerador: ");
    scanf("%d", &n2);
    printf("Introduce un segundo denominador: ");
    scanf("%d", &d2);
    return(0);
}

int MCD(int a, int b){

    int mayor, i, mcd;

    if(a>b){
        mayor = a;
    }else{
        mayor = b;
    }

    for(i=1; i<=mayor; i++){
        if((a%i==0) && (b%i==0)){
            mcd = i;
        }
    }
    return(mcd);
}