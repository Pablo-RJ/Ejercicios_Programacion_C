/* EJERCICIO 23 - TEMA 3 */

/* Realizar un programa que permita calcular el area de un cuadrado, un cırculo o un triangulo equilatero.
El programa ha de presentar un menu pedir los datos necesarios y hacer el calculo. */

#include <stdio.h>

float cuadrado(float area, float altura);
float circulo(float radio);
float triangulo(float base, float altura);

int main(){

   int caso;
   float base, altura, radio;
   float area_cuadrado, area_circulo, area_triangulo;

   printf("\n1: Calcular el area de un cuadrado");
   printf("\n2: Calcular el area de un circulo");
   printf("\n3: Calcular el area de un triangulo");
   printf("\nIntroducir el caso que se desea realizar: ");
   scanf("%d", &caso);

    switch(caso){

     case 1:
      printf("\nCUADRADO:");
      printf("\nIntroducir el valor de la base: ");
      scanf("%f", &base);
      printf("\nIntroducir el valor de la altura: ");
      scanf("%f", &altura);
      area_cuadrado = cuadrado(base,altura);
      printf("\nLa solucion final es %.3f", area_cuadrado);
      break;

   case 2:
      printf("\nCIRCULO:");
      printf("\nIntroducir el valor del radio: ");
      scanf("%f", &radio);
      area_circulo = circulo(radio);
      printf("\nLa solucion final es %.3f", area_circulo);
      break;

   case 3:
      printf("\TRIANGULO:");
      printf("\nIntroducir el valor de la base: ");
      scanf("%f", &base);
      printf("\nIntroducir el valor de la altura: ");
      scanf("%f", &altura);
      area_triangulo = triangulo(base,altura);
      printf("\nEl resultado de la operacion es %.3f", area_triangulo);
      break;

   return(0);
   }
}

float cuadrado(float area, float altura){
   float solucion;
   solucion = area * altura;
   return solucion;
}

float circulo(float radio){
   float solucion;
   solucion = 3.14159265*(radio*radio);
   return solucion;
}

float triangulo(float base, float altura){
   float solucion;
   solucion = (base*altura)/2;
   return solucion;
}
