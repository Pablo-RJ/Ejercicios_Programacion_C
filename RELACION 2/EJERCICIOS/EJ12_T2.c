/* EJERCICIO 12 - TEMA 2 */

/* Realizar un programa para calcular los valores de la funciOn: */

#include <stdio.h>

int main() {

   float funcion;
   int valor_x, valor_y;

   printf("Parejas de valores: \n");

   for (valor_x=-50; valor_x<=50; valor_x=valor_x+2){
      for (valor_y=-40; valor_y<=40; valor_y++){
         funcion = sqrt(valor_x) / ((valor_y*valor_y)-1);
         printf("x: %d, y: %d \t f(x,y); %f\n", valor_x, valor_y, funcion);
      }
   }

   return(0);
}
