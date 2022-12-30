/* EJERCICIO 5 - TEMA 2 */

/*Expresar mediante estructuras condicionales anidadas y utilizando ´unicamente condiciones simples (sin
usar &&, ||) las siguientes sentencias:
if ((A<B && C!=D) && (B>D || B==D))
    <S1>;
if ((A<B && C!=D) && (B>D || B==E))
    <S2>;
*/

#include <stdio.h>

int main(){

    int a, b, c, d, e;
    a=1;
    b=2;
    c=3;
    d=0;
    e=0;

    if(a < b){
        if(c!=d){
            if(b >= d){
                printf("Sentencia 1");
            }
            if (b > d){
                printf("\nSentencia 2");
            }else if(b == e){
                printf("\nSentencia 2");
            }
        }
    }
}