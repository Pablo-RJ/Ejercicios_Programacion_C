/* EJERCICIO 9 - TEMA 1 */

/*Realizar un programa para calcular la desviacion tıpica de tres numeros, x1, x2 y x3, segun la siguiente formula*/

int main(){
  
    int num_1, num_2, num_3;
    float media, desviacion_tipica;

    printf("Introduce el primer numero: ");
    scanf("%d", &num_1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &num_2);
    printf("Introduce el tercer numero: ");
    scanf("%d", &num_3);

    media = (num_1+num_2+num_3) / 3;
    desviacion_tipica = sqrt( (pow((num_1-media),2))+(pow((num_2-media),2))+(pow((num_3-media),2)) / 3);

    printf("\nLa media de los numeros introducidos es igual a %.2f", media);
    printf("\nLa desviacion tipica de los numeros introducidos es igual a %.3f", desviacion_tipica);
    return(0);
}