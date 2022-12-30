/* EJERCICIO 25 - TEMA 2 */

/*  En una asignatura de una ingenierıa se dispone de dos examenes para aprobar en convocatoria ordinaria.
Cada examen recibe una nota entre 0 y 10, obteniendose la calificacion definitiva de acuerdo a los siguientes
criterios:
    Si solo se ha presentado a un examen y lo ha aprobado la calificacion sera la que se deduzca de la nota
    obtenida en dicho examen.
    Si ha suspendido todos los examenes a los que se ha presentado la calificacion es suspenso.
    Si no se ha presentado a ninguno la calificacion es no presentado.
    Si ha obtenido mayor nota en el segundo que en el primero la calificacion sera la del segundo.
    Si ha obtenido menor nota en el segundo que en el primero la calificacion sera la media de ambas */

#include <stdio.h>

int main(){

    int numero_examenes;
    float nota, nota_primer_examen, nota_segundo_examen;

    printf("\nCuantos examenes has realizado?: ");
    scanf("%d", &numero_examenes);

    if(numero_examenes == 0){
        printf("\nSu calificacion en los examenes es: NO PRESENTADO");

    }else if(numero_examenes == 1){
        printf("\nIntroduzca la nota de su examen: ");
        scanf("%f", &nota); 
        if(nota<5){
            printf("\nSu calificacion en los examenes es: SUSPENSO");
        }else if((nota>=5)&&(nota<7)){
            printf("\nSu calificacion en los examenes es: APROBADO");
        }else if((nota>7)&&(nota<9)){
            printf("\nSu calificacion en los examenes es: NOTABLE");
        }else if((nota>9)&&(nota<10)){
            printf("\nSu calificacion en los examenes es: SOBRESALIENTE");
        }else if(nota = 10){
            printf("\nSu calificacion en los examenes es: MATRICULA DE HONOR");
        }

    }else if(numero_examenes==2){
        printf("\nIntroduzca la nota del primer examen: ");
        scanf("%f", &nota_primer_examen);
        printf("\nIntroduzca la nota del segundo examen: ");
        scanf("%f", &nota_segundo_examen);

        if((nota_primer_examen<5)&&(nota_segundo_examen<5)){
        printf("\nSu calificacion en los examenes es: SUSPENSO");
        }else if(nota_segundo_examen>nota_primer_examen){
            nota = nota_segundo_examen;
            if(nota<5){
                printf("\nSu calificacion en los examenes es: SUSPENSO");
            }else if((nota>=5)&&(nota<7)){
                printf("\nSu calificacion en los examenes es: APROBADO");
            }else if((nota>=7)&&(nota<9)){
                printf("\nSu calificacion en los examenes es: NOTABLE");
            }else if((nota>=9)&&(nota<10)){
                printf("\nSu calificacion en los examenes es: SOBRESALIENTE");
            }else if(nota == 10){
                printf("\nSu calificacion en los examenes es: MATRICULA DE HONOR");
            }
        }else if(nota_segundo_examen<=nota_primer_examen){
            nota = (nota_primer_examen+nota_segundo_examen)/2; 
            if(nota<5){
                printf("\nSu calificacion en los examenes es: SUSPENSO");
            }else if((nota>=5)&&(nota<7)){
                printf("\nSu calificacion en los examenes es: APROBADO");
            }else if((nota>=7)&&(nota<9)){
                printf("\nSu calificacion en los examenes es: NOTABLE");
            }else if((nota>=9)&&(nota<10)){
                printf("\nSu calificacion en los examenes es: SOBRESALIENTE");
            }else if(nota = 10){
                printf("\nSu calificacion en los examenes es: MATRICULA DE HONOR");
            }
        }   
    }    
    return(0);
}