/* EJERCICIO 4 - TEMA 4 */

/*Realizar una funcion que compruebe si dos vectores de caracteres son iguales.*/

#include <stdio.h>

int Comparar_Vectores();

int main(){

    int vector_uno[5];
    int vector_dos[5];
    int i, j;

    for(i=1; i<=5; i++){
        printf("Introduce el %d elemento del primer vector: ", i);
        scanf("%d", &vector_uno[i]);
    }
    for(j=1; j<=5; j++){
        printf("Introduce el %d elemento del segundo vector: ", j);
        scanf("%d", &vector_dos[j]);
    }
    
    if(Comparar_Vectores(vector_uno, vector_dos) == 0){
        printf("Los vectores introducidos no son iguales");
    }else if(Comparar_Vectores(vector_uno, vector_dos) == 1){
       printf("Los vectores introducidos son iguales"); 
    }

    
    return(0);
}

int Comparar_Vectores(int vector_uno[], int vector_dos[]){

    int i, j, vectores;

    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if(vector_uno[i]==vector_dos[j]){;
                vectores = 1;
            }else{
                vectores = 0;
            }
        }
    }
    return(vectores);
}