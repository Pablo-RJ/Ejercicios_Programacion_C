/*EJERCICIO 26 - TEMA 2 */

/*A un supermercado llegan todos los dias un conjunto de productos que estan inventariados en una lista.
En dicha lista viene, para cada producto, una terna de valores: el codigo de identificacion del producto, el
codigo de identificacion de la seccion y el costo del producto. Cada una de las secciones del supermercado
tiene un tanto por ciento diferente de ganancia del producto */

#include <stdio.h>

int main(){

   int producto, seccion;
   float coste, PVP;
   const IVA = 0.07;
   const IVA_Bazar = 0.16;
   const charcuteria = 0.3;
   const carniceria = 0.2;
   const verduleria = 0.1;
   const fruteria = 0.15;
   const bazar = 0.4;

   printf("Introduce el codigo del producto: ");
   scanf("%d", &producto);

   while(producto!=0){

      printf("\nIntroduce el codigo de sección: ");
      scanf("%d",&seccion);
      printf("\nIntroduce el coste del producto(euros): ");
      scanf("%f",&coste);

      if(seccion==1){
         PVP = (coste+coste*charcuteria) + (coste+coste*charcuteria) * IVA;
         printf("\nCodigo producto: %d\nNombre de seccion: Charcuteria\nPVP=%f\n\n", producto, PVP);
      }else if(seccion==2){
         PVP = (coste+coste*carniceria)  +(coste+coste*carniceria) * IVA;
         printf("\nCodigo producto: %d\nSeccion: Carniceria\nPVP=%f\n\n", producto, PVP);
      }else if(seccion==3){
         PVP = (coste+coste*verduleria) + (coste+coste*verduleria) * IVA;
         printf("\nCodigo producto: %d\nSeccion: Verdurelia\nPVP=%f\n\n", producto, PVP);
      }else if(seccion==4){
         PVP = (coste+coste*fruteria) + (coste+coste*fruteria) * IVA;
         printf("\nCodigo producto: %d\nSeccion: Fruteria\nPVP=%f\n\n", producto, PVP);
      }else if(seccion==5){
         PVP = (coste+coste*bazar) + (coste+coste*bazar) * IVA_Bazar;
         printf("\nCodigo producto: %d\nSeccion: Bazar\nPVP=%f\n\n", producto, PVP);
      }
      printf("Introduce el codigo del producto: ");
      scanf("%d", &producto);
   }
   return(0);
}
