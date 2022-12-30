/* PROBLEMA 2.1.3 - VECTOR CON TERMINO GENERAL DADO */

/*Sea la sucesión:
vk = k^2+3
desarrolle un programa que lea el número n de componentes que se quieren calcular de la sucesión y almacenarlas
en un vector vec, tal que vec(i)=vi. Se mostrará el vector por pantañña. Puede asumir que n será siempre menor o igual a 100*/

#include <stdio.h>

void main(void){

    int vec[100];
    int i, n;

    printf("PROGRAMA QUE IMPRIME LAS N COMPONENTES DE UN VECTOR\n");
    printf("CUYAS COMPONENTES SON i*i+3\n\n");

    printf("Introduce n<=100\t");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        vec[i] = (i+1) * (i+1) + 3;
        printf("%d", vec[i]);
    }
}