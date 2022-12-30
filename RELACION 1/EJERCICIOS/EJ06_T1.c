/* EJERCICIO 6 */

/*  Realizar un programa que pida una temperatura en grados Celsius y la convierta a grados Fahrenheit
mostrando en pantalla un mensaje del tipo xxx grados Celsius son yyy grados Fahrenheit. */

/* OPCION 1 */
#include <stdio.h>

int main(){

    float celsius, fahrenheit;

    printf("Introduzca los grados celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius*1.8 + 32;

    printf("%.3f  grados Celsius son %.3f grados Fahrenheit", celsius, fahrenheit);

    return(0);
}

/* OPCION 2 */
#include <stdio.h>

int main(){

    float GradosC, GradosF;  

    printf("\nPasar de grados Celsius a grados Farenheit");
    printf("\nIntroduzca el numero de grados celsius: ");    
    scanf("%f", &GradosC);

    GradosF = (9 * GradosC/5) + 32;  

    printf("\n %f grados Celsius son %f grados Farenheit", GradosC, GradosF);


}