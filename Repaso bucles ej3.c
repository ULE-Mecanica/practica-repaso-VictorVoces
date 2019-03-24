//Repaso de bucles ej-3
//Programa que pida a un usuario una contraseña debera terminar cuando la acierte, tiene 3 intentos.Contraseña(4567).

#include <stdio.h>


int main(){
	
	int x;
	int i=1;
	
	
	
	do{
		printf("Introduce la contra: ");
		scanf("%i",&x);
		i++;
		if (x == 4567){
		
		printf("CORRECTO\n");
		}
			
		if (x != 4567){
			if(x > 4567){
			printf("El numero introducido es mayor.\n");
			}
			else{
			printf("El numero introducido es menor.\n");
			}
		
		}	
	
		
	}while(i <= 3 && x != 4567);
	

	
	system("pause");
	return 0;
}


