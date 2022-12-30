/* EJERCICIO 12 - TEMA 1 */

/*Los corredores se dice que corren a un ritmo determinado que viene expresado en minutos/kilometro. Hacer un programa para pasar
de ritmo a una velocidad en km/hora. El programa debe pedir el ritmo en minutos/kilometro y mostrar ese ritmo en Km/hora.*/

int main(){

    int minutos_kilometros;
    float kilometros_hora;

    printf("Introduce la velocidad de los corredores en minutos por kilometro: ");
    scanf("%d", &minutos_kilometros);
    
    kilometros_hora = 60 / minutos_kilometros;

    printf("La velocidad de los corredore en kilometros por hora es igual a %.2f", kilometros_hora);
    return(0);
}