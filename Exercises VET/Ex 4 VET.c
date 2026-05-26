/*Faça um programa que leia um vetor de inteiros, positivos ou negativos, com 8 posições. Crie
e mostre dois vetores resultantes, um contendo somente os números positivos e o outro
somente os negativos.*/


#include <stdio.h>

#define TAM 8
int main () {
	int vet[TAM], Vpos[TAM], Vneg[TAM], pos=0, neg=0,i;
	
	for(i=0; i<TAM ; i++) {
		printf("[ %i ]: ", i+1);
		scanf("%i",&vet[i]);
		
		if(vet[i]>0) {
			pos++;
		}
		if(vet[i]<0) {
			neg++;
		}
			
	}
	
	for(i=0; i<TAM ; i++) {
		if(vet[i]>0) {
			Vpos[i]=vet[i];
		}
		if(vet[i]<0) {
			Vneg[i]=vet[i];
		}
			
	}
		
	
	printf("======POSITIVOS======\n");
	
	for(i=0; i<TAM ; i++) {
		printf("%i ", Vpos[i]);
	}
	
	printf("\n======NEGATIVOS======\n");
	
	for(i=0; i<TAM ; i++) {
		printf("%i ", Vneg[i]);
	}
	
	return 0;
	
}
