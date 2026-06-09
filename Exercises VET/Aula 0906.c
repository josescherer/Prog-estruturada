/*Leia um vetor com 12 números reais, calcule a média e exiba apenas os elementos maiores que a média.*/

#include <stdio.h>
#define TAM 5
int main () {
	int i;
	float num[TAM], soma=0, md;
	
	
	for(i=0;i<TAM;i++) {
		printf("\nDigite um numero: ");
		scanf(" %f",&num[i]);
		soma+=num[i];	
	}
	md=soma/TAM;
	
	
	printf("\n====== NUMEROS > MEDIA ( %.2f) =======\n", md);
	for(i=0;i<TAM;i++) {
		if(num[i]>md) {
			printf("Posicao %d: %.2f\n", i, num[i]);
		}
	
	}
	return 0;
}
