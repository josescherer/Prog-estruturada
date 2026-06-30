/*Faça um programa que preencha:
a. Um vetor de 8 posições, contendo nomes de lojas;
b. Outro vetor com quatro posições contendo nomes de produtos;
c. Uma matriz com os preços de todos os produtos em cada loja.
O programa deverá mostrar todas as relações (nome do produto – nome da loja) em que o
preço não ultrapasse R$ 120,00.*/

#include <stdio.h>

int main () {
	
	char lojas[8][100], produtos[4][100];
	float mat[8][4];
	int lin, col;
	
	for(lin=0;lin<8;lin++) {
			printf("Digite o nome da loja [%i]: ",lin+1);
			scanf(" %[^\n]s",lojas[lin]);
			
	}
	
	printf("\n===========\n" );
	for(lin=0;lin<4;lin++) {
			printf("Digite o nome do produto [%i]: ",lin+1);
			scanf(" %[^\n]s",produtos[lin]);	
		
	}
	
	printf("\n========\n Digite os preços dos produtos: \n\n" );
	for(lin=0;lin<8;lin++) {
		printf("\n====== LOJA [%s] =======", lojas[lin]);
		for(col=0;col<4;col++) {
			printf(" \nproduto [ %s ]: ",produtos[col]);
			scanf("%f", &mat[lin][col]);
		}
	}
	
	printf("\n\n====== PRODUTOS COM PRECO ATE R$ 120,00 ======\n");
	for(lin=0;lin<8;lin++) {
    	for(col=0;col<4;col++) {

        	if(mat[lin][col]<=120) {
            	printf("\nLoja: %s", lojas[lin]);
            	printf("Produto: %s", produtos[col]);
            	printf("Preco: R$ %.2f\n", mat[lin][col]);
        	}
    	}
	}
		
	return 0;
}

