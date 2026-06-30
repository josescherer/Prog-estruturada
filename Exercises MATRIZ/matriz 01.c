/*Criar um programa que armazena dados inteiros em uma matriz 5x5 e imprime somente os
valores que se encontram em posições cuja linha mais coluna forma um número par*/

#include <stdio.h>
#define tam 3
int main () {
	int mat[tam][tam],lin, col;
	
	for(lin=0;lin<tam;lin++) {
		for(col=0;col<tam;col++) {
			printf("Digite o valor da matriz [%i][%i]: ",lin,col);
			scanf("%i",&mat[lin][col]);
			printf("\n");
			
		}
	}
	for(lin=0;lin<tam;lin++) {
		for(col=0;col<tam;col++) {
			if((lin+col)%2==0) {
				printf("mat[%d][%d] = %d\n", lin, col, mat[lin][col]);
			}
		}
		
	}
	return 0;
}
