/*
Nombre: Steven Sebastian Florido Paez
Taller #1 Primer taller en C
Ejercicio 3
*/

#include <stdio.h>	
#include <math.h>

void bienvenida()
{
	printf("==================================\n");
    	printf("	Programa que calcula	\n");
	printf("    la distancia entre 2 puntos\n");
	printf("==================================\n");
}

void calculo()
{
	float x1,x2,y1,y2,distancia;
    	
	
	printf("\nIngrese posicion x PRIMER punto: ");
	scanf("%f", &x1);
	printf("\nIngrese posicion y PRIMER punto: ");
	scanf("%f", &y1);
	printf("\nIngrese posicion x SEGUNDO punto: ");
	scanf("%f", &x2);
	printf("\nIngrese posicion y SEGUNDO punto: ");
	scanf("%f", &y2);
	
	distancia = sqrt((pow(x1-x2,2)+pow(y1-y2,2)));
	
	printf("\nLa distancia entre los puntos es: %f\n",distancia);
}

int main()
{
	bienvenida();
	calculo();
    	return 0;
}
