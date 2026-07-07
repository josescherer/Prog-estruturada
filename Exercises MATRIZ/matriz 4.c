/*Faça um programa que receba do usuário uma matriz 10x10 de inteiro e depois faça:
a. Troque a segunda linha e a oitava;
b. Troque a sexta coluna e a nona;
c. Mostre como ficou a matriz.*/

#include <stdio.h>

#define tam 10

int main () {
	int mat[tam][tam],lin,col, i,aux;
	
	for(lin=0;lin<tam;lin++) {
		for(col=0;col<tam;col++) {
			printf("Digite o valor mat[%i][%i]: ",lin,col);
			scanf("%i",&mat[lin][col]);
		}
	}
	
	for(i=0;i<tam;i++) {
		aux=mat[1][i];
		mat[1][i]=mat[7][i];
		mat[7][i]=aux;
				
		aux=mat[i][5];
		mat[i][5]=mat[i][8];
		mat[i][8]=aux;
	}
	
	for(lin = 0; lin < tam; lin++) {
    	for(col = 0; col < tam; col++) {
        	printf("%4d", mat[lin][col]);
    	}
    	printf("\n");
	}
	
	return 0;	

	
	
}

