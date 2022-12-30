/* EJERCICIO 15 - TEMA 1 */

/*  Realizar un programa para intercambiar los contenidos de dos variables enteras. */

int main(){

    float num_1, num_2, aux;

    printf("Introduzca el valor de A: ");
    scanf("%f", &num_1);
    printf("Introduzca el valor de B: ");
    scanf("%f", &num_2);

    aux = num_1;
    num_1 = num_2;
    num_2 = aux;

    printf("\nEl valor de A es igual a %.2f", num_1);
    printf("\nEl valor de B es igual a %.2f", num_2);
    return(0);
}