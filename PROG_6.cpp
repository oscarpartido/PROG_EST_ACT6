/*AUTOR: OSCAR VIVALDI PARTIDO RAMIREZ, REALIZADO EL DIA 10/02/2022

programa para una tiernda de Arduinos, dicha tienda existe una promocion

-si se compran minimo 5 arduinos, tienen el 15% de descuento

- si no , solo el 5% de descuento

cada arduino tiene un costo de $350.00

El programa pedira la cantidad de ARDUINOS Y CALCULARA el total a pagar

*/

#include <stdio.h>

int main(){

//declarar variables

int arduinos;

float total, descuento=0;

printf("ingresa la cantidad de arduinos: ");

scanf("%d", &arduinos);

//proceso

total=arduinos*350.00;

if(arduinos>=5){

descuento=total*0.15;

}

else {

descuento=total*0.05;

}

printf("subtotal:\t $%10.2f\n",total);

printf("descuento:\t-$%10.2f\n",descuento);

printf("\t\t---------\n");

printf("total:\t\t $%10.2f", total-descuento);

return 0;

}
