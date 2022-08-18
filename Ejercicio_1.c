/*
Nombre: Steven Sebastian Florido Paez
Taller #1 Primer taller en C
Ejercicio 1
*/
#include <stdio.h>	

void bienvenida()
{
	printf("==================================\n");
    	printf("	Programa que calcula	\n");
	printf("    el producto de dos numeros\n");
	printf("==================================\n");
}

void calculo()
{
	int num1,num2,solucion;
    	
	
	printf("\nIngrese primer numero: ");
	scanf("%d", &num1);
	printf("Ingrese segundo numero: ");
	scanf("%d", &num2);
	
	solucion=num1*num2;
	
	printf("\nResultado de la operacion: %d\n",solucion);
}

int main()
{
	bienvenida();
	calculo();
    	return 0;
}
