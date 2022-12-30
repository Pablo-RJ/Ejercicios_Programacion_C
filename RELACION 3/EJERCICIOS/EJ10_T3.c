/* EJERCICIO 10 - TEMA 3 */

/* Escribir una funcion que, dados tres enteros representando el dıa, mes y ano, nos diga si corresponden a
una fecha correcta. */

#include <stdio.h>

int coincide_fecha(int dia_servidor, int dia_usuario, int mes_servidor, int mes_usuario, int ano_servidor, int ano_usuario){

    int resultado;

    if((dia_usuario=dia_servidor)&&(mes_usuario=mes_servidor)&&(ano_servidor==ano_servidor)){
        resultado = 1;
    }
    return(resultado);
}

int main(){

    int dia_servidor, mes_servidor, ano_servidor;
    int dia_usuario, mes_usuario, ano_usuario;

    printf("SERVIDOR: ");
    printf("Introduzca el dia deseado: "); 
    scanf("%d", &dia_servidor); 
    printf("Introduszca el mes deaseado: ");
    scanf("%d", &mes_servidor);
    printf("Introduzca el ano deseado: ");
    scanf("%d", &ano_servidor);

    printf("USUARIO: ");
    printf("Introduzca el dia que cree correcto: ");
    scanf("%d", &dia_usuario);
    printf("Introduszca el mes que cree correcto: ");
    scanf("%d", &mes_usuario);
    printf("Introduzca el ano que cree correcto: ");
    scanf("%d", &ano_usuario);

    if(coincide_fecha(dia_servidor, dia_usuario, mes_servidor, mes_usuario, ano_servidor, ano_usuario) == 1){
        printf("¡¡¡Enhorabuena has acertado¡¡¡");
    }else{
        printf("Has fallado");
    }

    return(0);
}