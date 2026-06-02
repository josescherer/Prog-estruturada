/*Exercício de Vetor para ENTREGAR. Faça um programa em C para ler 10 números DIFERENTES a serem armazenados em um vetor. 
Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso o usuário digite um número que já foi digitado anteriormente, 
o programa deverá pedir para ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, 
verificando se ele existe entre os números que já foram fornecidos. Ao final, exiba na tela o vetor final que foi digitado.*/


#include <stdio.h>

#define TAM 10
int main () {
	int vet[TAM], i, j, rep;
	
		for(i=0;i<TAM;i++) {
			do {
				printf("Digite o numero (SEM REP): ");
				scanf("%i",&vet[i]);
				
				rep=0;
				for(j=0;j<i;j++) {	
					if(vet[i]==vet[j]) {
						rep=1;
						printf("NUMERO REPETIDO!\n");
						break;
						
					}
				}		
			}while(rep==1);	
		}
		
		printf("\n========= VETOR =========\n");
		for(i=0;i<TAM;i++) {
			printf("[ %i ]\n", vet[i]);
		}
		
		return 0;
	}	

