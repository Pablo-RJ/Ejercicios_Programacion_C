/* EJERCICIO 11 */

/* Realizar un programa para calcular la suma de los 100 primeros terminos de la sucesion */

#include <stdio.h>
#include <math.h>

int main () {

   float suma;
   int n;

   suma = 0;

   for(n=1; n<=100; n++)
      suma = suma + (pow(-1,n) * ((pow(n,2)-1))) / (2*n);

   printf("\nLa suma total de la sucesion de numeros es igual a %f", suma);

   return(0);
}

