/*BEJERCICIO 14 - TEMA 1 */

/*Realizar un programa para una caja de un supermercado que lea un precio desde el teclado y una
cantidad entregada por el cliente (se supone que cantidad >= precio) y obtenga en la pantalla el
numero mınimo de monedas de 1 euro, 50 centimos, 10 centimos y 1 centimo que se deben dar de cambio.
Por ejemplo, si precio es 1.12 euros y cantidad es 5 euros, debe dar como resultado 3 monedas de 1 euro,
1 moneda de 50 centimos, 3 monedas de 10 c entimos y 8 monedas de 1 centimo.*/

#include <stdio.h>

int main(){

    float precio_producto, dinero_entregado;
    int devolucion, monedas_euro, monedas_50centimos, monedas_10centimos, monedas_1centimo;

    printf("Introduce el precio del producto: ");
    scanf("%f", &precio_producto);
    printf("Introduce el dinero entregado por el cliente: ");
    scanf("%f", &dinero_entregado);

    devolucion = (dinero_entregado*100) - (precio_producto*100);

        monedas_euro = devolucion / 100;
        monedas_50centimos = (devolucion%100) / 50;
        monedas_10centimos = (devolucion%50) / 10;
        monedas_1centimo = (devolucion%10);

    printf("El cambio debe de ser de %d monedas de 1 euro, %d monedas de 50 centimos, %d monedas de 10 centimos y %d monedas de 1 centimo", 
        monedas_euro, monedas_50centimos, monedas_10centimos, monedas_1centimo);
    return(0);
}
