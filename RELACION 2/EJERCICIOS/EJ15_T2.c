/* EJERCICIO 15 - TEMA 2 */

/* Crear un programa que lea dos numeros positivos y muestre por pantalla su maximo comun divisor. */

#include <stdio.h>

int main() {

   int num_1, num_2, mayor, menor, maximo_comun_divisor=1;
   int i;

   printf("Introduzca dos numeros positivos: \n");
   printf("Primer numero: ");
   scanf("%d", &num_1);
   printf("Segundo numero: ");
   scanf("%d", &num_2);

   if(num_1>num_2){
      mayor = num_1;
      menor = num_2;
   } else{
      mayor = num_2;
      menor = num_1;
   } 

   for(i=1; i<=menor; i++){
      if((num_1%i==0)&&(num_2%i==0)){
         maximo_comun_divisor = i;
      }
   }

   printf("El maximo comun divisor de ambos numeros es %d", maximo_comun_divisor);
   
   return(0);
}
