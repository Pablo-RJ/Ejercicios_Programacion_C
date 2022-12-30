/* EJERCICIO 17 - TEMA 2 */

/* Crear un programa que lea un numero positivo e imprima un mensaje indicando si el numero es o no primo.*/

#include <stdio.h>

int main(){

   int numero, divisores=0, i=1;

   printf("Introduzca un numero positivo cualquiera: ");
   scanf("%d", &numero);

   for(i=1; i<=numero; i++)
      if (numero % i == 0)
         divisores++;

   if(divisores>2)
      printf("\nEl numero introducido no es primo");

   else if(divisores<=2)
      printf("\nEL numero introducido es primo");

   return(0);
}
