/* PROBLEMA 3.1.8 - CRIANDO CONEJOS */

/*Un granjero valora si adquirir o no una pareja de conejos recien nacidos con la siguiente peculiaridad:
a partir del primer mes de vida, la pareja es capaz de reproducirse una vez al mes y generar otra pareja
con la misma capacidad reproductora. Ello implica que, en el primer mes, el granjero tendra una unica pareja 
de conejos.
Durante el segundo mes, la pareja de conejos que compró se habrá reproducido una vez, de manera que el granjero
tendrá dos parejas de conejros en total.
En el tercer mes, la pareja original se habra vuelto a reproducir, por lo que el total de parejas asciende a tres.
Al cuarto mes, la pareja original se reproduce de nuevo y lo hace tambiñen su primera camada, por lo que el total
pasará a cinco parejas.
Teniendo en cuetna este patrón de reproducción, realice una función que índique la cantidad dde parejas de conejos
existente en el mes n.
Utilice esta función para calcuar la cantidad de conejos al final del primer año.*/

#include <stdio.h>

int fibonacci(int n);

void main(void){

    int mes, numero_conejos;

    printf("Introduzca el mes: \n");
    scanf("%d", &mes);

    numero_conejos = fibonacci(mes);
    printf("El numero de conejos en el mes %d es: %d", mes, numero_conejos);
}

int fibonacci(int n){

    int term=1, termsiguiente=1, aux, i;

    for(i=1; i<n; i++){
        aux = term + termsiguiente;
        term = termsiguiente;
        termsiguiente = aux;
    }
    return(termsiguiente);
}
