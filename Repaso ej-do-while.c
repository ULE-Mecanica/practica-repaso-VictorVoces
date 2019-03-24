//Bucle do-while
//Calcular el factorial de un numero con una funcion.

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
	
	i=1;
	aux=1;
	
	do{
		aux*=i;
		i++;
	}while(i <= a);
	
	return aux;
}
