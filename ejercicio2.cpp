/*
*Nombre del Programa: Area de un triangulo
*Autor: Richard ramirez
*Fecha: 23/02/2017
*Resumen: programa que calcula el area de un Triangulo.
*/

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
//declaracion de variables
    float lAltura,lBase,Area;

//datos de entrada
    printf("Ingrese la base del triangulo \n");
    scanf("%f", &lBase);
    printf("Ahora ingrese la altura del triangulo\n");
    scanf("%f", &lAltura);

//proceso
    Area = (lBase*lAltura)/2;

//salida
    printf("El area del triangulo es:  %f\n",Area);
    return 0;
    system("pause");
}
