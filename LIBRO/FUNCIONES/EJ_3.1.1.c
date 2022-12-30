/* PROBLEMA 3.1.1 - NUMERO PERFECTO */

/*Se pide:

1) Programe la funcion esperfecto, que recibe como argumento un numero natural y devuelve
una valor 1 si el numero es perfecto, y 0 en caso contrario.

2) Desarrolle la funcion principal del programa que calcules los 4 primeros numeros perfectos
y los muestre por pantalla.*/

#include <stdio.h>

int esperfecto(int n);

void main(void){

    int num=0, i=1;

    while(num<4){
        if (esperfecto(i)){
            printf("\n%d es perfecto", i);
            num++;
        }
        i++;
    }
    return(0);
}

int esperfecto(int n){

    int i, res=0, salida=0;

    for(i=1; i<n; i++){
        if(n%i==0){
            res = res+i;
        }
    }

    if(res==n){
        salida = 1;
    }

    return(salida);
}