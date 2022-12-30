/* EJERCICIO 16 - TEMA 2 */

/*Crear un programa que lea dos numeros positivos y muestre por pantalla su mınimo comun multiplo*/

#include <stdio.h>

int main(){

   int valor_a, valor_b, mayor=0, menor=0, mcm, mcd=1;
   int i, i1, i2;

   printf("Introduzca dos numeros positivos: \n");
   printf("Primer numero: ");
   scanf("%d", &valor_a);
   printf("Segundo numero: ");
   scanf("%d", &valor_b);

   if(valor_a>valor_b){
      mayor = valor_a;
      menor = valor_b;
   }else {
      mayor = valor_b;
      menor = valor_a;
   }
      for (i=1; i<=menor; i++)
         if(menor%i==0 && mayor%i==0)
         mcd = i;

   mcm = (valor_a*valor_b) / mcd;

   printf("El Minimo Comun Multiplo es: %d", mcm);

   return(0);
}

