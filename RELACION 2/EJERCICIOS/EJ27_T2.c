/* EJERCICIO 27 - TEMA 2*/

/*  Realizar un programa que compruebe si dos enteros leıdos desde el teclado son primos relativos, es decir,
que no exista ningun valor que divida de forma entera a ambos. El programa solo debe dar por salida el
mensaje “SI SON PRIMOS RELATIVOS” o “NO SON PRIMOS RELATIVOS”. */

#include <stdio.h>

int main() {
    int num1, num2;

    // Leer los dos números desde el teclado
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    // Recorrer todos los valores desde 2 hasta el menor de los dos números
    for (int i = 2; i <= num1 || i <= num2; i++) {
        // Verificar si alguno de los dos números es divisible por el valor actual del ciclo
        if (num1 % i == 0 && num2 % i == 0) {
            printf("NO SON PRIMOS RELATIVOS\n");
            return 0;
        }
    }

    // Si el ciclo termina sin encontrar ningún valor que divida a ambos números, entonces son primos relativos
    printf("SI SON PRIMOS RELATIVOS\n");
    return 0;
}
