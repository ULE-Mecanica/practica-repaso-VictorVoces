//Bloque 4.2 Ejemplos de funciones
//Calcular el factorial de dos numeros con una funcion.

#include <stdio.h>

int factorial(int x);

int main(){
	int x,y,fact1,fact2;
	
	printf("Introduce un numero para calcular su factorial: ");
	scanf("%i",&x);
	
	
	fact1 = factorial(x);
	
	
	printf("El resultado es %i.\n",fact1);
	
	
	system("pause");
	return 0;
}

int factorial(int a){
	int i, aux;
	
	i = 1;
	aux=1;
	
	while(i <= a){
		aux = aux*i;
		i++;
	}
	
	
	return aux;
}
