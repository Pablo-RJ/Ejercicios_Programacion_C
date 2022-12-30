/* EJERCICIO 7 - TEMA 1*/

/*Hacer un programa que calcule Cuantos tercios de cerveza (333cc) al x % de alcohol me puedo tomar si
no quiero tomar mas de 50 mililitros de alcohol. */

#include <stdio.h>

int main() {

  int mililitros_maximos = 50;
  float porcentaje_alcohol;
  float mililitros_alcohol;
  int tercios;

  printf("Introduce el porcentaje de alcohol de la cerveza (en formato X.XX): ");
  scanf("%f", &porcentaje_alcohol);

  // Calculamos la cantidad de mililitros de alcohol que hay en un tercio de cerveza
  mililitros_alcohol = 333 * porcentaje_alcohol / 100;
  // Calculamos el número de tercios que podemos tomar sin exceder los 50 mililitros de alcohol
  tercios = mililitros_maximos / mililitros_alcohol;

  printf("Puedes tomar %d tercios de cerveza sin exceder los 50 mililitros de alcohol.\n", tercios);

  return (0);
}

/*Este programa hace lo siguiente:

Declara las variables necesarias para almacenar la cantidad máxima de mililitros de alcohol que se pueden tomar, el porcentaje de alcohol de la cerveza, la cantidad de mililitros de alcohol que hay en un tercio de cerveza y el número de tercios que se pueden tomar.
Pide al usuario que introduce el porcentaje de alcohol de la cerveza.
Calcula la cantidad de mililitros de alcohol que hay en un tercio de cerveza utilizando la fórmula mililitros_alcohol = 333 * porcentaje_alcohol / 100.
Calcula el número de tercios que podemos tomar sin exceder los 50 mililitros de alcohol utilizando la fórmula tercios = mililitros_maximos / mililitros_alcohol.
Muestra el resultado en pantalla con el formato Puedes tomar X tercios de cerveza sin exceder los 50 mililitros de alcohol.*/