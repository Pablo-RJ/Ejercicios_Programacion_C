/* EJERCICIO 24 - TEMA 2 */

/* Realizar el mismo ejercicio de antes pero permitiendo jugar tantas veces como lo desee el jugador */

#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int main(){
    
    int numero_secreto, numero_adivinado, numero_intentos=0, intentos_deseados;

    srand(time(NULL));
    numero_secreto = rand()%100+1;

    printf("Introduce el numero de intentos que deseas tener: ");
    scanf("%d", &intentos_deseados);

    printf("Adivina el numero secreto (entre 1 y 100): ");
    scanf("%d", &numero_adivinado);
    numero_intentos++;

    while(numero_adivinado!=numero_secreto){
        if((numero_adivinado==0)||(numero_intentos==intentos_deseados)){
            printf("El juego ha terminado. El numero secreto era %d.\n", numero_secreto);
            return(0);
        }
        numero_intentos++;
        if(numero_adivinado<numero_secreto){
            printf("El numero que buscas es mayor. Intentalo de nuevo: ");
        }else{
            printf("El numero que buscas es menor. Intentalo de nuevo: ");
        }
        scanf("%d", &numero_adivinado);
    }

    printf("!Enhorabuena, has acertado el numero secreto en %d intentos!\n", numero_intentos);
 
    return(0);
}