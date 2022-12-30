/* EJERCICIO 9 - TEMA 3 */

/* Escribir una funcion que nos diga si un año dado (como un entero) es o no bisiesto. Los años bisiestos son
aquellos que bien son multiplo de 4 pero no de 100, o bien son multiplo de 400. Ademas, hay que tener
en cuenta que este calendario empezo a aplicarse a partir de 1582. */

#include <stdio.h>

int bisiesto(int year){

  int bisiesto;
  
  if(year>=1582){
    if((year%4==0)&&(year%100!=0)){
      bisiesto = 1;
    }else{
      bisiesto = 0;
    }
  }else{
    bisiesto = 2;
  }
  return(bisiesto);
}

int main(){

    int year;

    printf("Introduce el ano deseado: ");
    scanf("%d", &year);

    if(bisiesto(year)==1){
        printf("El a%co introducido es bisiesto", 164);
    }else if(bisiesto(year)==0){
      printf("El a%co introducido no es bisiesto", 164);
    }else if(bisiesto(year)==2){
      printf("Antes de 1582 no existia el concepto de a%co bisiesto", 164);
    }
}
