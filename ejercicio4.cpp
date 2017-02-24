/*
*Nombre del Programa: tabla de multiplicar.
*Autor: Richard ramirez
*Fecha: 23/02/2017
*Resumen: Programa que calcula la tabla de multiplicar de un numero.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
//declaracion de variables
   int lNumero,multiplicacion,i;

//datos de entrada
printf("Ingrese su numero, Por Favor\n");
    scanf("%d", &lNumero);

//proceso y datos de salida
for (i=1;i<=10;i++){
    multiplicacion=lNumero*i;
    printf("%d*%d=%d\n",lNumero,i,multiplicacion);

}
return 0;
system ("pause");
}
