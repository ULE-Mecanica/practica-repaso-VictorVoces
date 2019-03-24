//Bucle for
//Calcular el factorial de dos numeros con una funcion.

#include <stdio.h>

int factorial(int x);

int main(){
	int x,y,fact1;
	
	printf("Introduce un numero para calcular su factorial: ");
	scanf("%i",&x);
	
	
	fact1 = factorial(x);
	
	
	printf("El resultado es %i.\n\n",fact1);
	
	
	system("pause");
	return 0;
}

int factorial(int a){
	int i, aux;
	
	aux=1;
	
	for(i = 1 ; i <= a; i++){
		aux = aux*i;
		
	}
	
	
	return aux;
}
