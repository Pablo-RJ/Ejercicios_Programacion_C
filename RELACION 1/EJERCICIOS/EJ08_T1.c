/* EJERCICIO 8 - TEMA 1 */

/*Hacer un programa que calcule el numero de paneles solares que necesito para producir 1000kwh en un
mes. Sabido que los paneles solares son del 17 % de rendimiento y que el tamaño de los paneles solares es
1,6m2. En funci on de la radiacion solar en kwh/m2dia y los dias que tiene el mes que seran una entrada
del programa. Como valor orientativo en invierno los kwh/m2dia son 5.*/

#include <stdio.h>

int main() {

  float rendimiento = 0.17;
  float tamanio_panel = 1.6;
  float kwh_necesarios = 1000;
  float radiacion;
  int dias_mes;
  float kwh_diarios;
  float paneles_necesarios;

  printf("Introduce la radiación solar en kwh/m2dia: ");
  scanf("%f", &radiacion);
  printf("Introduce el número de días del mes: ");
  scanf("%d", &dias_mes);

  // Calculamos la cantidad de energía que se puede generar diariamente con un panel solar
  kwh_diarios = radiacion * tamanio_panel * rendimiento;
  // Calculamos el número de paneles necesarios para generar los 1000 kwh en un mes
  paneles_necesarios = kwh_necesarios / (kwh_diarios * dias_mes);

  printf("Se necesitan %.2f paneles solares para generar 1000 kwh en un mes.\n", paneles_necesarios);

  return (0);
}

/*Este programa hace lo siguiente:

Declara las variables necesarias para almacenar el rendimiento y el tamaño de los paneles solares, la cantidad de energía que se necesita generar, la radiación solar y los días del mes.
Pide al usuario que introduce la radiación solar y los días del mes.
Calcula la cantidad de energía que se puede generar diariamente con un panel solar utilizando la fórmula kwh_diarios = radiación * tamaño_panel * rendimiento.
Calcula el número de paneles necesarios para generar los 1000 kwh en un mes utilizando la fórmula paneles_necesarios = kwh_necesarios / (kwh_diarios * días_mes).
Muestra el resultado en pantalla con el formato Se necesitan X.XX paneles solares para generar 1000 kwh en un mes.*/