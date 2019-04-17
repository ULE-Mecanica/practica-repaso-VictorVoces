//Repaso matrices
/*Programa suma.c cuya función principal 
llame a una función que inicializa la matriz que se le pasa como argumento, 
cuyo tamaño es 6x6, con números aleatorios entre 1 y 10. Luego la función principal 
llamará a una función suma que recibe una matriz como argumento y devuelve 
la suma de todos los elementos de la matriz. La función principal imprimirá la 
matriz una vez inicializada por la función y después el resultado devuelto por la función suma. 
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
