/*Realice un programa cuya funci�n principal llame a una funci�n que inicializa 
la matriz que se le pasa como argumento,cuyo tama�o es 9x9, con la matriz 
identidad (en la diagonal 1s y 0s en el resto).La funci�n principal imprimir� 
la matriz una vez inicializada por la funci�n. Hay que utilizar bucles. 
*/

#include <stdio.h>
#include <stdlib.h>

void inicializa(int matriz[9][9]);

int main (){
	
	int matriz[9][9];
	int i,j;
	
	
	inicializa(matriz);
	
	for (i = 0; i < 9; i++){
		for (j = 0; j < 9; j++){
			printf("%i ",matriz[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
void inicializa(int matriz[][9]){
	
	int i,j;
	
	for (i = 0; i < 9; i++){
		for (j = 0; j < 9; j++){
			matriz[i][j] = (i == j);
		}
	}
	
}
