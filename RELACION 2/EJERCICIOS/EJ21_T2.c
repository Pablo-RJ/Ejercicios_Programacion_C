/* EJERCICIO 21 - TEMA 2 */

/* Realizar un programa que muestre la tabla de multiplicar de los enteros menores que diez */

#include <stdio.h>

int main(){

   int numero, multiplicador;

   for (numero=0; numero<=10; numero++){
      printf("\nLa tabla de multiplicar del numero %d es la siguiente:\n", numero);
      for(multiplicador=1; multiplicador<=10; multiplicador++){
         printf("%d x %d = %d\n", numero, multiplicador, numero*multiplicador);
      }
   }
   return(0);
}

