/* EJERCICIO 2 -TEMA 2*/

/* Construir la negacion de las condiciones del ejercicio anterior, de manera que el operador de negacion solo afecte a condiciones simples*/

#include <stdio.h>

int main(){

    int i, j;
    i = 6;
    j = 12;

    if(!(2 * i)<= j){ /*Es verdadera*/
        printf("La afirmacion '(2 * i)<= j)' es verdadera");
    }else{
        printf("La afirmacoin '(2 * i)<= j)' es falsa");
    }
    if(!(2 * i -1)< j){ /*Es verdadera*/
        printf("\nLa afirmacion '(2 * i - 1)< j)' es verdadera");
    }else{
        printf("\nLa afirmacoin '(2 * i - 1)< j)' es falsa");
    }
    if(!(2 * i)<= j){ /*Es verdadera*/
        printf("\nLa afirmacion '(2 * i)<= j)' es verdadera");
    }else{
        printf("\nLa afirmacoin '(2 * i)<= j)' es falsa");
    }
    if(!(i > 0) && !(i <= 10)){ /*Es verdadera*/
        printf("\nLa afirmacion '(i > 0) && (i <= 10)' es verdadera");
    }else{
        printf("\nLa afirmacoin '(i > 0) && (i <= 10)' es falsa");
    }
    if(!(i > 25) || !(i < 50) && !(j < 50)){ /*Es verdadera*/
        printf("\nLa afirmacion '(i > 25) || (i < 50) && (j < 50)' es verdadera");
    }else{
        printf("\nLa afirmacoin '(i > 25) || (i < 50) && (j < 50)' es falsa");
    }
    if(!(i < 4) || !(j > 5)){ /*Es verdadera*/
        printf("\nLa afirmacion '(i < 4) || (j > 5)' es verdadera");
    }else{
        printf("\nLa afirmacoin '(i < 4) || (j > 5)' es falsa");
    }
    if(!!(i > 6)){ /*Es verdadera*/
        printf("\nLa afirmacion '!(i > 6))' es verdadera");
    }else{
        printf("\nLa afirmacoin '!(i > 6)' es falsa");
    }

}
