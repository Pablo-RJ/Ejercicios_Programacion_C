/* EJERCICIO 26 - TEMA 3 */

/* El metodo de Newton para hallar la raız cuadrada de un numero real positivo X tiene gran interes ya que
utiliza solo sumas multiplicaciones y divisiones (algunas de ellas divisiones por 2 que son inmediatas para
la maquina). El metodo consiste en lo siguiente: para calcular la raız cuadrada de un numero X tal que
el cuadrado de la solucion difiera de X menos de un cierto error E, comenzamos con la aproximacion a =
X/2. Si |(a ∗ a) − X| < E paramos los calculos y el resultado es a. Si no, reemplazamos a con la siguiente
aproximaci´on definida por (a+X/a)/2. Entonces comprobamos si esta aproximacion es lo suficientemente
buena de la misma manera que antes lo hicimos. Si lo es, el calculo finaliza y si no prosigue iterativamente,
estando garantizado que la aproximacion converge. Escribe una funcion que implemente este metodo dados
X y el error E aceptable, y un programa que la utilice. */

#include <stdio.h>

float newton(float numero, float error);

int main(){

    float numero, error, raiz;

    do{
        printf("Introduce el numero que deseas calcular su raiz: ");
        scanf("%f", &numero);
    }while(numero<=0);
    do{
        printf("Introduce el error asumido: ");
        scanf("%f", &error);
    }while(error<=0);
    
    printf("\nLa raiz cuadrada de %.3d con un error de %.3f es %.4f", numero, error, newton(numero, error));

    return(0);
}

float newton(float numero, float error){

    float variable;

    while(abs((variable*variable)-numero)>=error){
        variable = (variable+numero/variable)/2;
    }
}
