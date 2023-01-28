/* EJERCICIO 24 - TEMA 4 */

/*DiseÑar una funcIon que nos indique los aciertos obtenidos en una quiniela.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM_MAX_VECTOR 100
/******************************************************************************************************************************/
/*                                                 CABECERAS Y PROTITIPADOS                                                   */
/******************************************************************************************************************************/
int Numero_Quinielas();
void Rellenar_Quiniela(int apuestas[], int numero_quiniela);
void Combinaciones_Ganadoras(int resultado[], int util);
int Numero_Aciertos(int vector[], int resultado[], int util);
/******************************************************************************************************************************/
/*                                                    PROGRAMA PRINCIPAL                                                      */
/******************************************************************************************************************************/
int main(){

    int vector[TAM_MAX_VECTOR], resultado[TAM_MAX_VECTOR];
    int numero_aciertos, util;

    util = Numero_Quinielas();
    Rellenar_Quiniela(vector, util);

    Combinaciones_Ganadoras(resultado, util);
    numero_aciertos = Numero_Aciertos(vector, resultado, util);

    printf("Los resultados son %d", Combinaciones_Ganadoras);
    printf("\nEl numero de acierto ha sido %d\n", numero_aciertos);

    return(0);
}

/******************************************************************************************************************************/
/*                                                        FUNCIONES                                                           */
/******************************************************************************************************************************/
int Numero_Quinielas(){

    int numero_quinielas;

    do{
        printf("Introduzca el numero de quinielas que desea jugar: ");
        scanf("%d", &numero_quinielas);
    }while(numero_quinielas<0 || numero_quinielas>TAM_MAX_VECTOR);

    return(numero_quinielas);
}

void Rellenar_Quiniela(int apuestas[], int numero_quiniela){

    int i;

    printf("\nA continuacion, se va a proceder a rellenar la quiniela\n");
    printf("\n1- Gana equipo local, 2- gana equipo visitantes, 0 empate\n");

    for(i=0; i<numero_quiniela; i++){
        printf("\nResultado Partido %d:  ",i+1);
        scanf("%d",&apuestas[i]);
    }
}

void Combinaciones_Ganadoras(int resultado[], int util){

    int i;

    srand(time(NULL));
    for(i=0; i<util; i++){
        resultado[i] = rand()%3;
    }
    printf("%d\t", resultado[i]);
}

int Numero_Aciertos(int vector[], int resultado[], int util){

    int i, num_aciertos=0;

    for(i=0; i<util; i++){
        if(vector[i] == resultado[i]){
            num_aciertos++;
        }
    }
    return(num_aciertos);
}

