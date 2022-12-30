/* EJERCICIO 16 - TEMA 1 */

/*Realizar un programa que declare las variables x, y y z, les asigne los valores 10, 20 y 30 e intercambien
entre sı sus valores de forma que el valor de x pasa a y, el de y pasa a z y el valor de z pasa a x (se pueden
declarar tantas variables adicionales como se desee).*/

#include <stdio.h>


int main(){

    int variable_x, variable_y, variable_z;
    int a, b, c;

    printf("Intruzca el numero 10 como el valor de X: ");
    scanf("%d",  &variable_x);
    printf("Intruzca el numero 20 como el valor de Y: ");
    scanf("%d", &variable_y);
    printf("Introduzca el numero 30 como el valor Z: ");
    scanf("%d", &variable_z);

    a = variable_x;
    b = variable_y;
    c = variable_z;
    variable_y = a;
    variable_z = b;
    variable_x = c;

    printf("\nEl nuevo valor de la variable X es: %d", variable_x);
    printf("\nEl nuevo valor de la variable Y es: %d", variable_y);
    printf("\nEl nuevo valor de la variable Z es: %d", variable_z);

    return(0);
}