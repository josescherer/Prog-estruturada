/*Crie um programa que leia um vetor de 10 posições e depois apresente este vetor em ordem
inversa na tela.*/

#include <stdio.h>

#define TAM 5
int main () {
	int vet[TAM], i;
	
	for(i=0; i<TAM ; i++) {
		printf("[ %i ]: ", i+1);
		scanf("%i",&vet[i]);
			
	}
	
	printf("======VETOR======\n");
	
	for(i=TAM-1; i>=0 ; i--) {
		printf("%i ", vet[i]);
	}
	
	return 0;
	
}

