/* EJERCICIO 23 - TEMA 3 */

/* Realizar un programa para jugar a adivinar un numero. El juego tiene que dar pistas de si el numero
introducido por el jugador esta por encima o por debajo del numero introducido. La regla de parada sera
a) que haya acertado o b) se haya hartado y decida terminar (decidir, en este caso, el modo de interrumpir el juego).*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int numero_secreto, numero_adivinado=0, intentos =0;
    
    srand(time(NULL));
    numero_secreto = rand()%100+1;

    printf("Adivina el numero secreto (entre 1 y 100): ");
    scanf("%d", &numero_adivinado);

    while(numero_adivinado != numero_secreto){
        if(numero_adivinado==0){
            printf("Has decidido terminar el juego. El numero secreto era %d.\n", numero_secreto);
            return(0);
        }
        intentos++;
        if(numero_adivinado<numero_secreto){
            printf("El numero que buscas es mayor. Intentalo de nuevo: ");
        }else{
            printf("El numero que buscas es menor. Intentalo de nuevo: ");
        }
        scanf("%d", &numero_adivinado);
    }

    printf("!Enhorabuena, has acertado el numero secreto en %d intentos!\n", intentos);
 
    return (0);
}