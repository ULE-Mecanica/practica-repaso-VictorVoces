//Practica repaso bucles


#include <stdio.h>

int multiplica(int x,int y);

int main(){
	
	int x,y,resultado;
	
	printf("Introduce un numero: ");
	scanf("%i",&x);
	
	printf("Introduce otro numero: ");
	scanf("%i",&y);
	
	resultado=multiplica(x,y);
	
	
	
	
	printf("El resultado de la multiplicacion: %i.\n",resultado);
	
	
	
	system ("pause");
	return 0;
}

int multiplica(int a, int b){
	
	int i,suma;
	suma = 0;
	
	for(i = 1; i <= b; i++){
		
		suma=suma + a;
		
	}
	
	
	
return suma;	
	
}
