/* EJERCICIO 8 - TEMA 3 */

/* Escribir un programa modular que presente un menu para calcular la potencia, factorial y combinatorio
de ciertos valores leıdos desde el teclado y muestre en pantalla el resultado de la operacion. Hacer primero
la descomposicion modular. */

#include <stdio.h>

int potencia(int n, float x){

   int aux, i;
   int solucion_pow;

   aux = x;
   for (i=1; i<n; i++)
      x = x * aux;
   solucion_pow = x;

   return solucion_pow;
}


int factorial(int n){

   int aux, i, combinatoria;
   int resultado_factorial;

   aux = n;
   for (i=1; i<aux; i++)
      n = n * (aux-i);
   resultado_factorial = n;

   return resultado_factorial;
}


int combinatoria(int n, int m){

   int i, nF=1, mF=1, nmF=1;
   int solucion_final, resultado_combinatoria;

   if(m==0 || m==n)
      return 1;
   else if(m>n)
      return 0;
   else
      for(i=n; i>=2; i--)
         nF = nF * i;
      for(i=m; i>=2; i--)
         mF = mF * i;
      for(i=n-m; i>=2; i--)
         nmF = nmF * i;

      resultado_combinatoria = nF / (mF*nmF);

   return resultado_combinatoria;
}



int main(){

   int x, n, m, caso;
   int resultado_pow, resultado_factorial, resultado_combinatoria;

   printf("\n1: Calcular la potencia x^n");
   printf("\n2: Calcular el factorial n!");
   printf("\n3: Calcular el combinatorio n sobre m");
   printf("\nIntroducir el caso que se desea realizar: ");
   scanf("%d", &caso);

    switch(caso){

     case 1:
      printf("\nPOTENCIA:");
      printf("\nIntroducir el valor x: ");
      scanf("%d", &x);
      printf("\nIntroducir el valor n: ");
      scanf("%d", &n);
      resultado_pow = potencia(n,x);
      printf("\nLa solucion final es %.0d", resultado_pow);
      break;


   case 2:
      printf("\nFACTORIAL:");
      printf("\nIntroducir el valor n: ");
      scanf("%d", &n);
      resultado_factorial = factorial(n);
      printf("\nLa solucion final es %.0d", resultado_factorial);
      break;


   case 3:
      printf("\nCOMBINATORIA:");
      printf("\nIntroducir el valor n: ");
      scanf("%d", &n);
      printf("\nIntroducir el valor m: ");
      scanf("%d", &m);
      resultado_combinatoria = combinatoria(n,m);
      printf("\nEl resultado de la operacion es %d", resultado_combinatoria);
      break;

   return(0);
   }
}
