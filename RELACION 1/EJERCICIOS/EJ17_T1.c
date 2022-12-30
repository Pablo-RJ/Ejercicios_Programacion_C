/* EJERCICIO 17 - TEMA 1 */

/*Declarar las variables necesarias y traducir las siguientes formulas a expresiones validas del lenguaje C.*/

#include <stdio.h>
#include <math.h>

int main(){

    int valor_x, valor_y, valor_h;
    float formula_1, formula_2, formula_3;

    printf("Introduzca el valor de X: ");
    scanf("%d", &valor_x);
    printf("Introduzca el valor de Y: ");
    scanf("%d", &valor_y);
    printf("Introduzca el valor de H: ");
    scanf("%d", &valor_h);

    formula_1 = (1+fabs(pow(valor_x, 2)/valor_y))/(pow(valor_x,3)/(1+valor_y));
    formula_2 = (1+(1/3)*sin(valor_h)-(1/7)*cos(valor_h))/(2*valor_h);
    formula_3 = sqrt(1+(pow(exp(valor_x)/(valor_x*valor_x),2)));

    printf("\nEl valor final de la primera expresion es igual a: %.4f", formula_1);
    printf("\nEl valor final de la segunda expresion es igual a: %.4f", formula_2);
    printf("\nEl valor final de la tercera expresion es igual a: %.4f", formula_3);

    return(0);
}