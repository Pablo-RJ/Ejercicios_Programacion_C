/* EJERCICIO 4 - TEMA 3 */

/* Realizar un programa para que escriba todos los n´umeros primos entre 1 y N, siendo N un n´umero
introducido por el usuario. */

#include <stdio.h>

int primo(int numero){

   int n_divisores=0, i=1;

   while(i<=numero){
      if(numero%i>0)
         n_divisores = n_divisores;
      else
         n_divisores++
   }
   i++

   if(n_divisores==2)
      return 1
   else
      return 0;
}

int main(){

   int numero, contador;

   printf("Introduzca un numero positivo cualquiera hasta el cual quieras saber los numeros primos contenidos: ");
   scanf("%d", &numero);



   return(0);
}