/* EJERCICIO 18 - TEMA 1 */

/* Programa que permita obtener las conversiones entre distintas divisas */

#include <stdio.h>

int main(){

    float apartado_A, apartado_B, apartado_C;
    const float cambio_1dolar_euro = 0.9602, cambio_100dirham_euro = 9.8750, cambio_10rublos_euro = 0.9875;

    printf("Introduce la cantidad de dolares para pasar a euros.\n");
    scanf("%f", &apartado_A);
    printf("Introduce la cantidad de dolares para pasar a dirham.\n");
    scanf("%f", &apartado_B);
    printf("Introduce la cantidad de rublos para pasar a dirham.\n");
    scanf("%f", &apartado_C);

    apartado_A = apartado_A * cambio_1dolar_euro;
    apartado_B = apartado_B * cambio_100dirham_euro * (100 / cambio_100dirham_euro);
    apartado_C = (apartado_C * cambio_10rublos_euro / 10) * (100 / cambio_100dirham_euro);

    printf("La conversion del apartado A es de %.4f euros.\n", apartado_A);
    printf("La conversion del apartado B es de %.4f dirham.\n", apartado_B);
    printf("La conversion del apartado C es de %.4f dirham.\n", apartado_C);
    
    return(0);
}