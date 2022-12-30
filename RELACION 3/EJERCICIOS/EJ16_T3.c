/* EJERCICIO 16 - TEMA 3 */
/* La fuerza de atraccion entre dos masas, m1 y m2 separadas por una distancia d.
Donde G es la constante de gravitacion universal. Escriba un programa que lea la masa de dos cuerpos y la distancia entre ellos y a continuacion obtenga la fuerza gravitacional
entre ellas.*/

#include <stdio.h>
#include <math.h>

int fuerza_gravitacional(float masa_1, float masa_2, float distancia){

    float fuerza;
    const double G = 6.67 * pow(10, (-11));

    fuerza = (G*masa_1*masa_2) / (distancia*distancia);

    return(fuerza);
}

int main(){

    float masa_1, masa_2, distancia;

    printf("Introduce la masa 1(kg): ");
    scanf("%f", &masa_1);
    printf("Introduce la masa 2(kg): ");
    scanf("%f", &masa_2);
    printf("Introduce la distancia(m) que separa a ambas masas: ");
    scanf("%f", &distancia);

    printf("La fuerza de atraccion entre los dos cuerpos es de %f Newton", fuerza_gravitacional(masa_1, masa_2, distancia));

    return(0);
}