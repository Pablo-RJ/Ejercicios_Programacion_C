/* EJERCICIO 3 - TEMA 1 */

/* Supongamos que tenemos Acido Sulfurico al 80 % de concentracion. Hacer un programa que pida una cantidad de centımetros cubicos x y 
una concentracion y, menor de 80 % y nos calcule cuanto Acido Sulfurico y agua hay que mezclar para obener x centimetros cubios de 
disolucion de Acido Sulfurico al y%. */

#include <stdio.h>

int main() {
  float concentracion_deseada;
  float cantidad_deseada;
  float concentracion_disponible = 0.8;
  float acido_sulfurico;
  float agua;

  printf("Introduce la cantidad de disolucion de acido sulfurico que deseas (en centimetros cubicos): ");
  scanf("%f", &cantidad_deseada);
  printf("Introduce la concentracion de la disolución de ácido sulfurico que deseas (en formato X.XX): ");
  scanf("%f", &concentracion_deseada);

  // Calculamos la cantidad de ácido sulfúrico y agua que hay que mezclar para obtener la cantidad y concentración deseadas
  acido_sulfurico = cantidad_deseada * concentracion_deseada / concentracion_disponible;
  agua = cantidad_deseada - acido_sulfurico;

  printf("Para obtener %.2f centímetros cúbicos de disolución de ácido sulfúrico al %.2f%%, debes mezclar %.2f centímetros cúbicos de ácido sulfúrico y %.2f centímetros cúbicos de agua.\n", cantidad_deseada, concentracion_deseada * 100, acido_sulfurico, agua);

  return (0);
}

/*Este programa hace lo siguiente:

Declara las variables necesarias para almacenar la concentración y cantidad de disolución de ácido sulfúrico que deseamos, la concentración de ácido sulfúrico disponible y la cantidad de ácido sulfúrico y agua que hay que mezclar.
Pide al usuario que introduce la cantidad y concentración de disolución de ácido sulfúrico que desea.
Calcula la cantidad de ácido sulfúrico y agua que hay que mezclar para obtener la cantidad y concentración deseadas utilizando las fórmulas acido_sulfurico = cantidad_deseada * concentracion_deseada / concentracion_disponible y agua = cantidad_deseada - acido_sulfurico.
Muestra el resultado en pantalla con el formato `Para obtener X.XX centímetros*/