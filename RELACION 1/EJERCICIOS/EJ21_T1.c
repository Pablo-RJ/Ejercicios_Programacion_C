/* EJERCICIO 21 - TEMA 1 */

/*Escribir un programa que calcule la capacidad de un disco duro de un ordenador datos (leıdos desde el
teclado) el numero de cilindros, pistas y sectores por pista. La capacidad de un sector se asume 512 bytes
pero podrıa variar en el futuro. 
La capacidad se calcula como: capacidad = cilindros ∗ pistas ∗ sectores ∗ bytes.*/

#include <stdio.h>

int main(){

    float cilindros, pistas, sectores;
    float capacidad_bytes, capacidad_kilo, capacidad_mega, capacidad_giga;

    printf("Introduzca el numero de cilindros: ");
    scanf("%f", &cilindros);
    printf("Introduzca el numero de pistas: ");
    scanf("%f", &pistas);
    printf("Introduzca el numero de sectores: ");
    scanf("%f", &sectores);    
    
    capacidad_bytes = cilindros * pistas * sectores * 512;
    capacidad_kilo = capacidad_bytes / 1024;
    capacidad_mega = capacidad_kilo / 1024;
    capacidad_giga = capacidad_mega / 1024;

    printf("\nEl disco duro tiene %.0f Bytes = %.3f KiloBytes = %f MegaBytes = %f GigaBytes", capacidad_bytes, capacidad_kilo, capacidad_mega, capacidad_giga);

    return(0);
}