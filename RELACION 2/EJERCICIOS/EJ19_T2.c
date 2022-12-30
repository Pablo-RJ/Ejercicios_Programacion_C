/* EJERCICIO 3 - TEMA 3 */

/* Realizar un programa para calcular los valores de la función para valores de
 x enteros en el rango [-3..3].*/

 #include <stdio.h>

 int main(){

    int x, codigo; 
    float funcion, numerador, denominador;

    for(x=-3; x<=3; x++){
        numerador = (3*x+pow(x, 2));
        denominador = (1-pow(x, 2));

        if((denominador==0) || (numerador/denominador<0)){
            if(denominador==0){
                codigo = 0;
            }else if(numerador/denominador<0){
                codigo = 1;
            }
        }else{
            funcion = sqrt((3*x+pow(x,2))/(1-pow(x,2)));
            codigo = 2;
        }
        if(codigo==0){
            printf("\nPara x(%d) la funcion no se puede calcular ya que se produce una indeterminacion", x);
        }else if(codigo==1){
            printf("\nPara x(%d) la funcion no se puede calcular ya que la raiz es negativa y no tiene solucion real", x);
        }else if(codigo==2){
            printf("\nPara x(%d) el resultado de la funcion es %f", x, funcion);
        }
    }
    return(0);
 }