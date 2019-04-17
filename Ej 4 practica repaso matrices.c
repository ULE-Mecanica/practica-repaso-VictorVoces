//Repaso matrices
/*Programa suma.c cuya funci�n principal 
llame a una funci�n que inicializa la matriz que se le pasa como argumento, 
cuyo tama�o es 6x6, con n�meros aleatorios entre 1 y 10. Luego la funci�n principal 
llamar� a una funci�n suma que recibe una matriz como argumento y devuelve 
la suma de todos los elementos de la matriz. La funci�n principal imprimir� la 
matriz una vez inicializada por la funci�n y despu�s el resultado devuelto por la funci�n suma. 
*/

#include <stdio.h>
#include <stdlib.h>

void inicializa (int matriz[6][6]);
void suma (int matriz[6][6]);

int main (){
	int matriz [6][6];
	int i,j;
	
	inicializa(matriz);
	
	for (i = 0; i < 6; i++){
		for (j = 0; j < 6; j++){
			printf("%i ",matriz[i][j]);
		}
		printf("\n");
	}
	
	suma(matriz);
	
	
	
	return 0;
}
void inicializa (int matriz[][6]){
	
	int i,j;
	srand(time(NULL));
	
	for (i = 0; i < 6; i++){
		for (j = 0; j < 6; j++){
			
		matriz[i][j] = rand ()%(10-1+1)+1;	
		}
	}
}
void suma (int matriz[][6]){
	int suma;
	int i,j;
	suma = 0;
	
	for (i = 0; i < 6; i++){
		for (j = 0; j < 6; j++){
			suma = suma + matriz[i][j];
		}
	}
	printf("\nLa suma de los elementos de la matriz es: %i .\n",suma);
	
}
