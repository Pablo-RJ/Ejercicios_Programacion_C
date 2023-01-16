/* EJERCICIO 2 - TEMA 5 */

/*crear una estructura apropiada para representar el tipo de dato n ́umero complejo. Un n ́umero complejo se
representa como: <parte_real> + <parte_imaginaria> * i donde i representa √−1. Construir adem ́as
funciones apropiadas para:
a) Sumar dos numeros complejos.
b) Multiplicar dos numeros complejos.
c) Hallar el conjugado de un numero complejo.
d) Imprimir un numero complejo con el formato (r, i), siendo r la parte real y i la parte imaginaria.*/

#include <stdio.h>
#include <stdlib.h>

struct numerocomplejo{
    int parte_real;
    int parte_imaginaria;
};
struct numerocomplejo producto_complejos (struct numerocomplejo numero_1, struct numerocomplejo numero_2){
    struct numerocomplejo producto;

    producto.parte_real = numero_1.parte_real * numero_2.parte_real - numero_1.parte_imaginaria * numero_2.parte_imaginaria;
    producto.parte_imaginaria = numero_1.parte_real * numero_2.parte_imaginaria + numero_1.parte_imaginaria * numero_2.parte_real;

    return(producto);
}
struct numerocomplejo suma_complejos (struct numerocomplejo numero_1, struct numerocomplejo numero_2){
    struct numerocomplejo suma;

    suma.parte_real = numero_1.parte_real + numero_2.parte_real;
    suma.parte_imaginaria = numero_1.parte_imaginaria + numero_2.parte_imaginaria;

    return(suma);
}
struct numerocomplejo hallar_conjugado (struct numerocomplejo numero){
    struct numerocomplejo conjugado;

    conjugado.parte_real = numero.parte_real;
    conjugado.parte_imaginaria = (-numero.parte_imaginaria);

    return(conjugado);
}

void Imprime_Complejo(struct numerocomplejo numero){
    printf("(%d, %d)", numero.parte_real, numero.parte_imaginaria);
}

int main(){

    struct numerocomplejo numero_1, numero_2, suma, producto, conjugado;

    printf("Primer numero:\n");
    printf("Introduce la componente real del numero complejo: ");
    scanf("%d", &numero_1.parte_real);
    printf("Introduce la componente real del numero complejo: ");
    scanf("%d", &numero_1.parte_imaginaria);
    printf("Introduce la componente real del numero complejo: ");
    scanf("%d", &numero_2.parte_real);
    printf("Introduce la componente real del numero complejo: ");
    scanf("%d", &numero_2.parte_imaginaria);

    suma = suma_complejos(numero_1, numero_2);
    producto = producto_complejos(numero_1, numero_2);
    conjugado = hallar_conjugado(numero_1);

    printf("La suma es: ");
    Imprime_Complejo(suma);
    printf("\nEl producto es: ");
    Imprime_Complejo(producto);
    printf("\nEl conjugado del primer numero es: ");
    Imprime_Complejo(conjugado);
}