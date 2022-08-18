/*
Nombre: Steven Sebastian Florido Paez
Taller #1 Primer taller en C
Ejercicio 2
*/
#include <stdio.h>
#include <stdlib.h>

void bienvenida()
{
	printf("==================================\n");
    	printf(" Programa que convierte de dias a\n");
	printf("      anos, semanas y dias\n");
	printf("==================================\n");
}

void calculo()
{
	int anos,semanas,dias;
    	
	printf("\nIngrese numero de dias: ");
	scanf("%d", &dias);
	
	if(dias<0)
	{
		printf("\nSe aplicara valor absoluto en el dato ingresado\n");
		dias=abs(dias);
	}
	
	anos = dias/365;
	semanas = (dias-(365*anos))/7;
	dias = (dias-(365*anos+semanas*7));
	
	printf("\nanos: %d",anos);
	printf("\nsemanas: %d",semanas);
	printf("\ndias: %d\n",dias);
}

int main()
{
	bienvenida();
	calculo();
	
	return 0;
}
