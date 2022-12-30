/* EJERCICIO 13 - TEMA 2 */

/*¿Qu e valor muestra por pantalla el siguiente trozo de codigo?*/

int main(){

    int contador, v, i;

    contador = 0;
    v = 0;

    for(i=1; i<=3; i++){
        while(contador<3){
            v = v + 1;
            contador = contador + 1; 
        }
    }
    printf("%d%d\n", v, contador);

    return(0);
}