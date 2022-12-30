/* EJERCICIO 4 -TEMA 2 */

/* Realizar un programa que lea dos valores enteros desde teclado y, en el caso de que uno divida al otro,
nos diga quien divide a quien.*/

#include <stdio.h>

int main(){

    int a, b;

    printf("Introduce un numero: ");
    scanf("%d", &a);
    printf("Introduce otro numero: ");
    scanf("%d", &b);

    if(((a%b) == 0) || (b % a ==0)){
        if((a % b) == 0){
            printf("El numero a divide al numero b");
        }
        if((b % a) == 0){
            printf("El numero b divide a el numero a");
        }
    }else{
        printf("Ningun numero divide a otro");
    }

}