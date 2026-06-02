/*Faça um programa que crie um vetor de inteiros de 9 elementos e promova as seguintes ações:

O usuário deve preencher o vetor somente com números inteiros positivos.
Imprima o vetor na tela em uma linha com espaços entre os números.
Mude os elementos do vetor de lugar (rotação dos elementos) onde todos os valores digitados devem ser deslocados para a posição seguinte e o último elemento deve ser armazenado na posição 0. Exemplo: O usuário digitou 7 8 9 52 87 96 54 85 69 23 e o vetor alterado vai ficar 23 7 8 9 52 87 96 54 85 69.
Repita o item (2).
Some o índice de cada elemento do vetor com o conteúdo da posição. No exemplo acima: 23+0, 7+1... Armazenar essas somas no próprio vetor.
Repita o item (2).
Ler um número inteiro, percorrer o vetor e dizer se esse número existe.*/


#include <stdio.h>

#define TAM 9
int main () {
		int vet[TAM],i,aux;
		
		for(i=0;i<TAM;i++) {
			do{
				printf("Digite um numero (POSITIVO) : ");
				scanf("%i",&vet[i]);
								
				aux=0;
				if (vet[i]<=0) {
					printf("ERRO!\n");
					aux=1;
				}
			}while(aux==1);	
		}
		
		printf("\n========= VETOR 01 =========\n");
		for(i=0;i<TAM;i++) {
			printf("%i ", vet[i]);
		}
		
		for(i=8;i<TAM;i++) {
			vet[i]=vet[i-1];
		}
	}
		
