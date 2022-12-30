/* EJERCICIO 10 - TEMA 1 */

/* Realizar un programa que lea una cantidad de horas, minutos y segundos con valores arbitrarios, y los transforme en una expresion
de tiempo convencional en la que los minutos y segundos dentro del rango [0,59]. Por ejemplo, dadas 10 horas, 119 minutos y 280 segundos,
deberıa dar como resultado 12 horas, 3 minutos y 40 segundos. */

int main(){

    int horas, minutos, segundos;

    printf("Introduce el numero de horas: ");
    scanf("%d", &horas);
    printf("Introduce el numero de minutos: ");
    scanf("%d", &minutos);
    printf("Introduce el numero de segundos: ");
    scanf("%d", &segundos);

    while(segundos>60){
        minutos = minutos + (segundos/60);
        segundos = segundos%60;
    }
    while(minutos>60){
        horas = horas + (minutos/60);
        minutos = minutos%60;
    }
    
    printf("\nEl numero de horas totales es igual a %d", horas);
    printf("\nEl numero de minutos totales es igual a %d", minutos);
    printf("\nEl numero de segundo totales es igual a %d", segundos);
    return(0);
}