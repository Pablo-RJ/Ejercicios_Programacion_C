/* EJERCICIO 22 - TEMA 2 */

/* Desarrollar un programa que determine en un conjunto de 100 numeros naturales, cuantos son menores
de 15, cuantos mayores que 50 y cuantos comprendidos entre 16 y 49. */

#include <stdio.h>

int main(){

   int numero, i;
   int menor15 = 0, mayor50 = 0, entre16y49 = 0;

   srand(time(NULL));
   for(i=1; i<=100; i++){
      numero = rand()%(100+1);
      printf("%d\t", numero);

      if(numero <= 15){
         menor15++;
      }else if(numero >= 50){
         mayor50++;
      }else if(numero>=16 && numero<=49){
         entre16y49++;
      }
   }

   printf("\nHay %d numeros menores de 15, %d mayores de 50 y %d entre 16 y 49", menor15, mayor50, entre16y49);

   return(0);
}
