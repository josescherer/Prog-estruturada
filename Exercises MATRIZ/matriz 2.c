/*Faça um programa que preencha uma matriz M(2x2), calcule e mostre a matriz R, resultante
da multiplicação dos elementos de M pelo seu maior elemento.*/

#include<stdio.h>
#define tam 2

int main () {
	int mat[tam][tam],mat_RESU[tam][tam],lin,col,maior;
	
	for(lin=0;lin<tam;lin++) {
		for(col=0;col<tam;col++) {
			printf("Digite o valor da matriz [%i][%i]: ",lin,col);
			scanf("%i",&mat[lin][col]);
			
			if(lin == 0 && col == 0) {
				maior=mat[0][0];
			}
			
			if(mat[lin][col]>maior) {
				maior=mat[lin][col];
			}
			printf("\n");
		}
	}
	printf("\nMATRIZ RESULTANTE \n");
	for(lin=0;lin<tam;lin++) {
		printf("| ");
		for(col=0;col<tam;col++) {
			mat_RESU[lin][col]=mat[lin][col]*maior;
			 printf("%d ", mat_RESU[lin][col]);
		}
		 printf("|\n");
	}
	
	return 0;

}


