/* EJERCICIO 18 - TEMA 2 */

/* Realizar un programa para hallar la descomposicion en factores primos de un valor entero */
#include <stdio.h>

int main(){

   int numero, divisor=2;

   printf("Introduce un numero para ver su descomposicion en factores primos: ");
   scanf("%d", &numero);

   while (numero>1){
      while(numero%divisor == 0){
         printf("\n%d", divisor);
         numero /= divisor;
      }
      divisor++;
   }
   return(0);
}
