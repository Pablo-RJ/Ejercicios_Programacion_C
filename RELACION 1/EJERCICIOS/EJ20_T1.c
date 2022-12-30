/* EJERCICIO 21 - TEMA 1 */

/*Realizar un programa que a partir de los 3 puntos extremos de un triangulo (P1, P2, P3) calcule el area
del mismo de acuerdo con la siguiente formulas*/

#include <stdio.h>

int main(){

    int x1, x2, y1, y2, x3, y3;
    float s1, s2, s3, t, area;

    printf("Introduce los vertices del triangulo:\n");
    printf("X(1): ");
    scanf("%d", &x1);
    printf("Y(1): ");
    scanf("%d", &y1);
    printf("X(2): ");
    scanf("%d", &x2);
    printf("Y(2): ");
    scanf("%d", &y2);
    printf("X(3): ");
    scanf("%d", &x3);
    printf("y(3): ");
    scanf("%d", &y3);

    s1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); /*caculamos las longitudes de los lados con la formula de la distancia entre dos puntos*/
    s2 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    s3 = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));

    t = (s1+s2+s3) / 2;
    area = sqrt(t*(t-s1)*(t-s2)*(t-s3));

    printf("El area del triangulo es igua a %.3f", area);
    return(0);
}