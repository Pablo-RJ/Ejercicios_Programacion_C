/* EJERCICIO 4 - TEMA 3 */

/* Realizar un programa para que escriba todos los numeros primos entre 1 y N, siendo N un numero introducido por el usuario. */

#include <stdio.h>

int Numero_Primo(int numero){

   int i, j, divisores;
   
   for(i=1; i<=numero; i++){
      divisores=0;
      for(j=1; j<=i; j++){
         if(i%j==0){ 
            divisores++;
         }
      }
      if(divisores<=2){
         printf("El numero %d es primo\n", i);
      }
   } 
   return (0);  
}

int main(){

   int numero, i;

   printf("Introduzca un numero positivo cualquiera hasta el cual quieras saber los numeros primos contenidos: ");
   scanf("%d", &numero);

   Numero_Primo(numero);
   
   return(0);
}