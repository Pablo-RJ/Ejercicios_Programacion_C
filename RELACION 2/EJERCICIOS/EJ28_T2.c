/* EJERCICIO 28 - TEMA 2 */

/*  El algoritmo de la multiplicacion rusa es una forma distinta de calcular la multiplicacion de dos numeros
enteros n × m. Para ello este algoritmo va multiplicando por 2 el multiplicador m y dividiendo (sin decimales) por dos el
multiplicando n hasta que n tome el valor 1 y suma todos aquellos multiplicadores cuyos
multiplicandos sean impares. */

#include <stdio.h>

int main(){

    int multiplicando, multiplicador, i=1, suma=0;

    printf("\nIntroduce los numeros que deseas multiplicar: ");
    printf("\nIntroduce el multiplicando: ");
    scanf("%d", &multiplicando);
    printf("\nIntroduce el multiplicador: ");
    scanf("%d", &multiplicador);

    printf("\nIteracion\tMultiplicando\tMultiplicador\tSuma\n");

    if(multiplicando % 2){
        suma = suma + multiplicador;
    }
    printf("\n\t%d\t\t%d\t\t%d\t%d\n", i, multiplicando, multiplicador, suma);

    while(multiplicando != 1){
        i++;
        multiplicando = multiplicando / 2;
        multiplicador = multiplicador * 2;
        if(multiplicando % 2){
            suma = suma + multiplicador;
        }
        printf("\n\t%d\t\t%d\t\t%d\t%d\n", i, multiplicando, multiplicador, suma);
    }
    printf("\nEL resultado final es: %d", suma); 
    return(0);
}