/* EJERCICIO 20 - TEMA 2 */

/* Realizar un programa que presente una tabla de grados C a grados Fahrenheit F=(9/5)C+32 desde los 0
grados a los 300, con incremento de 20 en 20 grados */

#include <stdio.h>

int main(){

   int fahr, celsius;

    printf("Equivalencia de grados Celsisus a grados Fahrenheit: ");

   for(celsius=0; celsius<=300; celsius=celsius+20){
      fahr = (celsius*(9.0/5.0)) + 32;
   printf("\n%d C  =  %d F", celsius, fahr);
    }
return(0);
}
