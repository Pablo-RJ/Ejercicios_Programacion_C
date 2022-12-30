/* EJERCICIO 17 - TEMA 3 */
 /* Escribe un programa que lea tres numeros reales que representan una hora en formato horas, minutos y
segundos, le sume un segundo y saque el resultado en formato HH:MM:SS. */

#include <stdio.h>

int reloj(int horas, int minutos, int segundos){

    int total_segundos, horas_finales, minutos_finales, segundos_finales
    int resto;

    horas = horas * 3600;
    minutos = minutos * 60;
    total_segundos = (horas + minutos + segundos) + 1;

    horas_finales = total_segundos / 3600;

    resto = total_segundos % 3600;
    minutos_finales = resto / 60;

    resto = minutos_finales % 60;
    segundos_finales = resto;

    if(segundos_finales>60){
        minutos_finales++;
        if(minutos_finales>60){
            horas_finales++
        }
    }
    return(horas_finales);
}
int main(){

    int horas, minutos, segundos;

    printf("Introduce el numero de HORAS: ");
    scanf("%d", &horas);
    printf("Introduce el numero de MINUTOS: ");
    scanf("%d", &minutos);
    printf("Introduce el numero de SEGUNDOS: ");
    scanf("%d", &segundos);

    printf("Finalmente el resultado es %d horas %d minutos y %d segundos", reloj(horas, minutos, segundos));
    return(0);
}