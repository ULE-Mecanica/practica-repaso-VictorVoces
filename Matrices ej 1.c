/*Realice un programa matriz.c en lenguaje C cuya función principal llame a
una función que inicializa la matriz que se le pasa como argumento, cuyo tamaño
es 5x5, con números aleatorios entre 3 y 15. La función principal imprimirá la
matriz una vez inicializada por la función. 
*/

#include <stdio.h>
#include <stdlib.h>

void inicializa (int matriz[5][5]);

int main (){
	int i,j;
	int matriz[5][5];
	
	inicializa(matriz);
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			
			printf("%i   ",matriz[i][j]);
			
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}

void inicializa (int matriz[][5]){
	int i,j;
	srand(time(NULL));
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
				matriz[i][j] = rand()%(15-3+1)+3;
		}
	}
}

