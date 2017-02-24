/*
*Nombre del Programa: Total en dolares.
*Autor: Richard ramirez
*Fecha: 23/02/2017
*Resumen: programa que calcula la cantidad de dolares en pesos.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
//declaracion de variables
    float ValorDolar,CantidadDolar,TotalDolar;
    printf("Ingrese elvalor del dolar\n");
    scanf("%f", &ValorDolar);
    printf("Ingrese la cantidad que tienes en dolares\n");
    scanf("%f", &CantidadDolar);
    TotalDolar=ValorDolar*CantidadDolar;
    printf("Su cantidad en dolares es:%f ",TotalDolar);
    return 0;
    system("pause");
}
