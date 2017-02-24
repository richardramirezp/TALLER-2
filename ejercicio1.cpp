/*
*Nombre del Programa: longitudes de la circunferencia Area, Perimetro y longitud.
*Autor: Richard ramirez
*Fecha: 23/02/2017
*Resumen: programa que calcula el area, el perimetro y la longitud de una circunferencia.
*/

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
//declaracion de variables
    float lRadio,PI,Area,diametro,longitud;
    //datos de entrada
    printf("Ingrese su radio\n");
    scanf("%f", &lRadio);
    PI=3.14;
    //proceso
    Area = PI*(pow(lRadio,2));
    diametro = lRadio+lRadio;
    longitud = 2*PI*lRadio;
    //salida
    printf("El area de la circunferencia es: %f\n",Area);
    printf("El diametro de la circunferencia es: %f\n",diametro);
    printf("La longitud de la circunferencia es: %f\n",longitud);
    return 0;
    system("pause");
}
