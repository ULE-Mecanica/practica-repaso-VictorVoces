//Practica repaso bucles Ejercicio 2


#include <stdio.h>

int divide(int x,int y);

int main(){
	
	int x,y,resultado;
	
	printf("Introduce un numero: ");
	scanf("%i",&x);
	
	printf("Introduce otro numero: ");
	scanf("%i",&y);
	
	resultado=divide(x,y);
	
	
	
	
	printf("El resultado de la division: %i.\n",resultado);
	
	
	
	
	
	
	system ("pause");
	return 0;
}

int divide(int a, int b){ 
	
	int division;
	
	division = 0;
	
	
	while(a >= b){
		
		a = a - b;
		division++;
	}
	
	
	
return division;	
	
}
