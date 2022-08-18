/*
*Fecha: 5 de agosto de 2022
*Autor: Steven Sebastian Florido Paez
*Materia: Computacion Paralela y Distribuida
*Tema: Primer taller en lenguaje C
*Ejercicio 9
*/

#include <stdio.h>
#include <stdlib.h> //contiene funciones de numeros aleatorios
#include <time.h>   //contiene funcion de tiempo

void bienvenida(){
	printf("==============================================\n");
	printf("Programa que rellena 2 matrices de tamano NxN\n");
	printf("       con numeros aleatorios de 0 a 9\n");
	printf("      para posteriormente multiplicarlas\n");
	printf("===========================================\n");
}

int tamano_matriz(){
	int n;
	printf("Ingrese tamano de las matrices: ");
	scanf("%d",&n);
	
	return n;
}

void llenado(int tamano,int m[]){

	int i,j;
	
	for(i=0;i<tamano;i++)
	{
		for(j=0;j<tamano;j++)
		{
			m[i+j*tamano]= rand()%9; //valores entre 0 y 9
		}
	}
}

void producto(int tamano, int a[], int b[], int c[]){
	
	int i,j,k,suma_parcial;
	
	for(i=0;i<tamano;i++){
		for(j=0;j<tamano;j++){
			suma_parcial=0;
			for(k=0;k<tamano;k++){
				suma_parcial += a[j+k*tamano]*b[k+i*tamano];
			}
			c[j+i*tamano] = suma_parcial;
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
	
		int matrizA[size],matrizB[size],matrizC[size];
		
		srand(time(NULL)); //inicializa el generador de numeros """""aleatorios"""""	
				   //NO se debe inicializar 2 veces pq genera el mismo patron de numeros
				   
		llenado(tamano,matrizA);
		printf("\nMatriz A\n");
		mostrar(tamano,matrizA);
		
		llenado(tamano,matrizB);
		printf("\nMatriz B\n");
		mostrar(tamano,matrizB);
		
		producto(tamano,matrizA,matrizB,matrizC);
		printf("\nMatriz Resultado\n");
		mostrar(tamano,matrizC);
	}
	else
	{
		printf("\nEl tamano de la matriz debe ser menor a 8 y mayor a 0\n");
	}
	
}
