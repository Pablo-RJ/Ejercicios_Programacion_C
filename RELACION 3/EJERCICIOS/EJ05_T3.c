/* EJERCICIO 5 - TEMA 3 */

/* Escribir una funcion en C para aceptar mensajes de confirmacion. La funcion debe imprimir en la pantalla
el mensaje ¿Confirmar (S/N)? y solo aceptara las pulsaciones de las teclas S y N (en mayuscula o
minuscula). La funcion devolvera false (0) si se ha pulsado N o bien true (1) si se ha pulsado S .
Hacer un main que muestre como se usa la funcion. */

#include <stdio.h>
#include <ctype.h>

char comprobar(char letra){
   int final;

   letra = toupper(letra);
   if((letra=='S') || (letra=='N')){
      if(letra=='N')
         final = 0;
      if(letra=='S')
         final = 1;
   }
   else
      final = -1;

   return final;
}

int main(){

    char letra;
    int respuesta;

    printf("Confirmar S/N?: ");
    scanf("%c",&letra);

    respuesta = comprobar(letra);

    if(respuesta==-1)
    printf("Introduce otro comando (N o S)\n");
    if(respuesta==0)
    printf("La operacion es FALSE\n");
    if(respuesta==1)
    printf("La operacion es TRUE\n");

    return (0);
}