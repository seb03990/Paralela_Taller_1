/*
Nombre: Steven Sebastian Florido Paez
Taller #1 Primer taller en C
Ejercicio 5
*/

#include <stdio.h>	

void bienvenida()
{
	printf("==================================\n");
    	printf("	Programa que muestra	\n");
	printf("   un triangulo rectangulo con *\n");
	printf("==================================\n");
}

int comprobar()
{
	int filas;
	
	printf("\nIngrese numero de lineas a mostrar: ");
	scanf("%d",&filas);
	
	return filas;
	
}

void escribir(int filas)
{
	if(filas<15 && filas>0)
	{
		for(int i=1;i<=filas;i++)
		{
			for(int j=0;j<i;j++)
			{
				printf("*");
			}
			
			printf("\n");
		}
	}
	else
	{
		printf("El numero de filas debe ser menor a 15 y mayor a 0\n");
	}
}

int main()
{
	int filas;
	bienvenida();
	filas = comprobar();
	escribir(filas);
	
    	return 0;
}
