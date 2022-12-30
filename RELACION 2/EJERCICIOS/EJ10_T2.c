/* EJERCICIO 10 */

/* Realizar un programa que presente un menu al usuario y que dependiendo de la opcion elegida, calcule
(sin usar pow) la funcion potencia x n siendo x un numero real y n un numero entero, la funcion factorial
de un numero entero n! o el combinatorio */

#include <stdio.h>

int main(){

   int n, m, nF=1, mF=1, nmF=1, caso, i, aux;
   float x, solucion_final;

   printf("\n1: Calcular la POTENCIA x^n");
   printf("\n2: Calcular el FACTORIAL n!");
   printf("\n3: Calcular el COMBINATORIO n sobre m");
   printf("\nIntroducir el caso que se desea realizar: ");
   scanf("%d", &caso);

   switch(caso){
   case 1:
      printf("\nIntroducir el valor x: ");
      scanf("%d", &x);
      printf("\nIntroducir el valor n: ");
      scanf("%d", &n);
      aux = x;
      for (i=1; i<n; i++)
         x = x * aux;
      solucion_final = x;
      printf("\nLa solucion final es %f", solucion_final);
    break;


   case 2:
      printf("\nIntroducir el valor n: ");
      scanf("%d", &n);
      aux = n;
      for (i=1; i<aux; i++)
         n = n * (aux-i);
      solucion_final = n;
      printf("\nLa solucion final es %f", solucion_final);
    break;


   case 3:
      printf("\nIntroducir el valor n: ");
      scanf("%d", &n);
      printf("\nIntroducir el valor m: ");
      scanf("%d", &m);
      for (i=n; i>=2; i--){
         nF = nF * i;
      }
      for (i=m; i>=2; i--){
         mF = mF * i;
      }
      for (i=n-m; i>=2; i--){
         nmF = nmF * i;
      }
      solucion_final = nF / (mF*nmF);
      printf("\nEl resultado de la operacion es %f", solucion_final);
    break;

    }

   return(0);
}
