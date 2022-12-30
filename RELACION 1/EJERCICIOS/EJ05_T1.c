/* EJERCICIO 15 - TEMA 1 */

/*  El precio final de un automovil para un comprador es la suma total del costo del vehıculo, la ganancia
del vendedor y del I.V.A. (que se aplica sobre la suma de costo y ganancia). Realizar un programa para
obtener el precio final de un automovil sabiendo que el porcentaje de ganancia de este vendedor es del
20 % y el I.V.A. aplicable es del 18 %. */


/* OPCION 1 */
#include <stdio.h>

int main(){

     float costo, ganancia, IVA, coste_final;

    printf("Introduzca el costo inicial del vehiculo: ");
    scanf("%f", &costo);

    ganancia = costo * 1.18;
    IVA = ganancia * 1.20;
    coste_final = IVA;
    
    printf("\nEl precio final del vehiculo es de %.3f euros", coste_final); 

    return(0);
}

/* OPCION 2 */
#include <stdio.h>
#include <math.h>

int main(){

    float PrecioInicial, PrecioFinal; 
    float Iva = 0.18;
    float P_Ganancia = 0.2; 

    printf("\nIntroduce el valor del coche: "); 
    scanf("%f", &PrecioInicial);

    PrecioFinal = PrecioInicial + PrecioInicial*P_Ganancia + Iva * (PrecioInicial * (1 + P_Ganancia));  

    printf("\nEl precio final del coche es de %f", PrecioFinal); 

    return(0); 
}