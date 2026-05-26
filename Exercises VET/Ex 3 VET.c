/*Faça um programa que pesquisa se um valor fornecido pelo usuário encontra-se em um vetor
de inteiros de 20 posições também fornecido pelo usuário.
*/

#include <stdio.h>

#define TAM 10
int main () {
	int vet[TAM], i, NUM, aux;
	
	for(i=0; i<TAM ; i++) {
		printf("[ %i ]: ", i+1);
		scanf("%i",&vet[i]);
			
	}
	
	printf("Digite o valor para procurar: ");
	scanf("%i",&NUM);
	aux=0;
	for(i=0; i<TAM ; i++) {
		if(NUM==vet[i]) {
			aux=1;
		}
	}
	
	if(aux==1) {
			printf("ACHOU!");	
	}
	
	else {
		printf("Não está presente!");
	}
		
	return 0;
	
}

