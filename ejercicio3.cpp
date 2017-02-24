/*
*Nombre del Programa: Salario.
*Autor: Richard ramirez
*Fecha: 23/02/2017
*Resumen: programa que calcula el salario total de un empleado.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
//declaracion de variables
    int Hora_Diurnas,Hora_nocturnas,Hora_Dominicales,Hora_festivas;
    int HoraD,TotalSalario,HorasDiurnas,HorasNocturnas;
    int HorasDominicales,HorasFestivas;
//datos de entrada

    printf("Ingrese sus horar diurnas\n");
    scanf("%d", &Hora_Diurnas);
    printf("Ingrese sus horar nocturnas\n");
    scanf("%d", &Hora_nocturnas);
    printf("Ingrese sus horar dominicales\n");
    scanf("%d", &Hora_Dominicales);
    printf("Ingrese sus horar festivas\n");
    scanf("%d", &Hora_festivas);
//proceso
    HoraD=2500;
    HorasDiurnas=HoraD*5;
    HorasNocturnas=(HoraD*(1+0.35))*10;
    HorasDominicales=(HoraD*(1+0.5))*4;
    HorasFestivas=(HoraD*(1+0.75))*10;
    TotalSalario= HorasDiurnas+HorasNocturnas+HorasDominicales+HorasFestivas;
//datos de salida
    printf("valor horas diurnas= %d\n",HorasDiurnas);
    printf("valor horas nocturnas= %d\n",HorasNocturnas);
    printf("valor horas dominicales= %d\n",HorasDominicales);
    printf("valor horas festivas= %d\n",HorasFestivas);
    printf("Total Salario= %d\n",TotalSalario);

    return 0;
    system("pause");
}
