/*EJERCICIO 11 - TEMA 3 */

/* Hacer un programa para calcular la diferencia en horas:minutos:segundos entre dos instantes de tiempo
dados en horas:minutos:segundos. */

int main(){

    int horas_1, minutos_1, segundos_1, horas_2, minutos_2, segundos_2, segundos_diferencia, minutos_diferencia, horas_diferencia;

    printf("Introduce el primer numero de horas: ", &horas_1);
    scanf("%d", &horas_1);
    printf("Introduce el primer numero de minutos: ", &minutos_1);
    scanf("%d", &minutos_1);
    printf("Introduce el primer numero de segundos: ", &segundos_1);
    scanf("%d", &segundos_1);
    printf("\nIntroduce el segundo numero de horas: ", &horas_2);
    scanf("%d", &horas_2);
    printf("Introduce el segundo numero de minutos: ", &minutos_2);
    scanf("%d", &minutos_2);
    printf("Introduce el segundo numero de segundos: ", &segundos_2);
    scanf("%d", &segundos_2);

    segundos_1 = horas_1*3600 + minutos_1*60 + segundos_1;
    segundos_2 = horas_2*3600 + minutos_2*60 + segundos_2;

    if(segundos_1>segundos_2){
        segundos_diferencia = segundos_1 - segundos_2;
    }else{
        segundos_diferencia = segundos_2 - segundos_1;
    }

    while(segundos_diferencia>60){
        minutos_diferencia = segundos_diferencia/60;
        segundos_diferencia = segundos_diferencia%60;
    }
    while(minutos_diferencia>60){
        horas_diferencia = minutos_diferencia/60;
        minutos_diferencia = minutos_diferencia%60;
    }

    printf("\nLa diferencia es de %d horas, %d minutos y %d segundos", horas_diferencia, minutos_diferencia, segundos_diferencia);
    return(0);
}