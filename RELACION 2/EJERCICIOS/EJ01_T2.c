/* EJERCICIO 1 - TEMA 2 */

/* Suponga que I y J son variables enteras cuyos valores son 6 y 12 respectivamente. ¿Cuales de las siguientes
condiciones son verdaderas? */

#include <stdio.h>

int main(){

    int i, j;
    i = 6;
    j = 12;

    if((2 * i)<= j){ /*Es verdadera*/
        printf("La afirmacion '(2 * i)<= j)' es verdadera");
    }else{
        printf("La afirmacoin '(2 * i)<= j)' es falsa");
    }
    if((2 * i -1)< j){ /*Es verdadera*/
        printf("\nLa afirmacion '(2 * i - 1)< j)' es verdadera");
    }else{
        printf("\nLa afirmacoin '(2 * i - 1)< j)' es falsa");
    }
    if((2 * i)<= j){ /*Es verdadera*/
        printf("La afirmacion '(2 * i)<= j)' es verdadera");
    }else{
        printf("La afirmacoin '(2 * i)<= j)' es falsa");
    }
    if((i > 0) && (i <= 10)){ /*Es verdadera*/
        printf("\nLa afirmacion '(i > 0) && (i <= 10)' es verdadera");
    }else{
        printf("\nLa afirmacoin '(i > 0) && (i <= 10)' es falsa");
    }
    if((i > 25) || (i < 50) && (j < 50)){ /*Es verdadera*/
        printf("\nLa afirmacion '(i > 25) || (i < 50) && (j < 50)' es verdadera");
    }else{
        printf("\nLa afirmacoin '(i > 25) || (i < 50) && (j < 50)' es falsa");
    }
    if((i < 4) || (j > 5)){ /*Es verdadera*/
        printf("\nLa afirmacion '(i < 4) || (j > 5)' es verdadera");
    }else{
        printf("\nLa afirmacoin '(i < 4) || (j > 5)' es falsa");
    }
    if(!(i > 6)){ /*Es verdadera*/
        printf("\nLa afirmacion '!(i > 6))' es verdadera");
    }else{
        printf("\nLa afirmacoin '!(i > 6)' es falsa");
    }
}
