/*Comrprobar si dos numeros diferentes son primos en una funcion*/

#include <stdio.h>

int primos(int numero);

int main(){

    int var_1, var_2, primo1, primo2;

    printf("Introduce el primer numero: ");
    scanf("%i", &var_1);
    printf("Introduce el segundo numero: ");
    scanf("%i", &var_2);

    primo1 = primo(var_1);
    primo2 = primo(var_2);

    if(primo1==1){
        printf("\n%i es numero primo", var_1);
    }else{
        printf("\n%i no es primo", var_1);
    }

    if(primo2==1){
        printf("\n%i es numero primo", var_2);
    }else{
        printf("\n%i no es primo", var_2);
    }
}

int primo(int numero){

    int i, divisores=0;

    for(i=1; i<=numero; i++){
        if(numero%i==0){
            divisores++;
        }
    }
    if(divisores<=2){
        divisores = 1;
    }else{
        divisores = 0;
    }
    return(divisores);
}