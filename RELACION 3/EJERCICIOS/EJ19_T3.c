/* EJERCICIO 19 - TEMA 3 */

/*Hacer un programa que muestre un menu de planetas para que el usuario seleccione un planeta y el
programa nos diga su distancia al sol. (Utilizar la sentencia switch).*/

#include <stdio.h>

int menu_planetas();
int distancia_planetas(int seleccion);

int main() {

    int seleccion;

    seleccion = menu_planetas();
    distancia_planetas(seleccion);
    
    return (0);
}

int menu_planetas() {
    int seleccion;
    do {
        printf("Elija un planeta de los que se muestran a continuación\n");
        printf("1----Mercurio\n");
        printf("2----Venus\n");
        printf("3----Tierra\n");
        printf("4----Marte\n");
        printf("5----Jupiter\n");
        printf("6----Saturno\n");
        printf("7----Urano\n");
        printf("8----Neptuno\n");
        printf("Pulse el numero correspondiente al planeta: ");
        scanf("%d", &seleccion);
    } while (seleccion < 1 || seleccion > 9);

    return (seleccion);
}

int distancia_planetas(int seleccion){
    
    int opcion, distancia;
    char planeta;

    opcion = seleccion;
    switch (opcion) {
        case 1:
            planeta = 'Mercurio';
            distancia = 59;
        break;
        case 2:
            planeta = 'Venus';
            distancia = 108;
        break;
        case 3:
            planeta = 'Tierra';
            distancia = 150;
        break;
        case 4:
            planeta = 'Marte';
            distancia = 228;
        break;
        case 5:
            planeta = 'Jupiter';
            distancia = 750;
        break;
        case 6:
            planeta = 'Saturno';
            distancia = 1431;
        break;
        case 7:
            planeta = 'Urano';
            distancia = 2877;
        break;
        case 8:
            planeta = 'Neptuno';
            distancia = 4509;
        break;
        case 9:
            planeta = 'Pluton';
            distancia = 5916;
        break;
    }
    printf("La distancia desde el sol hasta %c es de %d", planeta, distancia);
    return (0);
}