/*
*Fecha: 5 de agosto de 2022
*Autor: Steven Sebastian Florido Paez
*Materia: Computacion Paralela y Distribuida
*Tema: Primer taller en lenguaje C
*Ejercicio 7
*/

#include <stdio.h>
#include <stdlib.h> //contiene funciones de numeros aleatorios
#include <time.h>   //contiene funcion de tiempo

void bienvenida(){
	printf("===========================================\n");
	printf(" Programa que rellena matriz de tamano NxN\n");
	printf("   con numeros aleatorios de 0 a 9\n");
	printf("===========================================\n");
}

int tamano_matriz(){
	int n;
	printf("Ingrese tamano de la matriz: ");
	scanf("%d",&n);
	
	return n;
}

void llenado(int tamano,int m[]){

	int i,j;
	srand(time(NULL)); //inicializa el generador de numeros aleatorios	
	for(i=0;i<tamano;i++)
	{
		for(j=0;j<tamano;j++)
		{
			m[i+j*tamano]= rand()%9; //valores entre 0 y 9
		}
	}
}

void mostrar(int tamano,int m[]){

	int i,j;
	for(i=0;i<tamano;i++)
	{
		for(j=0;j<tamano;j++)
		{
			printf("%d ",m[i+j*tamano]);
		}
		printf("\n");
	}
}

int main(){
	
	int tamano,size;
	
	bienvenida();
	tamano = tamano_matriz();
	
	if (tamano<8 && tamano>=1)
	{
		size = tamano*tamano;
	
		int matriz[size];
		llenado(tamano,matriz);
		mostrar(tamano,matriz);
	}
	else
	{
		printf("\nEl tamano de la matriz debe ser menor a 8 y mayor a 0\n");
	}
	
}
