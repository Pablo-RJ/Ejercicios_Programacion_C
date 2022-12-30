/* EJERICICIO 3 - TEMA 2 */

/*Reescribir el siguiente ejemplo utilizando unicamente estructuras condicionales no anidadas:
if (A>B)
    if (B<=C)
        if (C!=D)
            <S1>;
        else
            <S2>;
    else
        <S3>;
else
    <S4>;
*/

#include <stdio.h>

int main(){

    int a, b, c, d;
    a = 66;
    b = 6;
    c = 88;
    d = 8;

    if((a > b) && (b <= c) && (c !=  d)){
        printf("Primera sentencia");
    }else if((a > b) && (b <= c) && !(c !=  d)){
        printf("Segunda sentencia");
    }else if((a > b) && (b <= c) && (c !=  d)){
        printf("Tercera sentencia");
    }else if(!(a > b) && !(b <= c) && (c !=  d)){
        printf("Cuarta sentencia");
    }

}