/*
Nombre: Steven Sebastian Florido Paez
Taller #1 Primer taller en C
Ejercicio 4
*/

#include <stdio.h>	

void bienvenida()
{
	printf("==================================\n");
    	printf("	Programa que muestra	\n");
	printf(" los primeros 10 numeros naturales\n");
	printf("==================================\n");
}

void calculo()
{
	for(int i=1;i<11;i++)
	{
		printf("%d  ",i);
	}
	
	printf("\n");
}

int main()
{
	bienvenida();
	calculo();
    	return 0;
}
