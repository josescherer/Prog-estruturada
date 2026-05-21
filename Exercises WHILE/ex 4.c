/*Faça um programa que leia um número não determinado de valores, calcule e mostre: a média aritmética dos valores lidos; 
a quantidade de valores positivos; a quantidade de valores negativos e o 
percentual de valores negativos e positivos. Use o zero (0) para sair.*/

#include<stdio.h>
#include<locale.h>

int main () {
	
	setlocale(LC_ALL,"Portuguese");

	int num, cont=0, soma=0, pos=0, neg=0;
	float media;

	do {
		
		printf("Digite um numero [0 para sair]: ");
		scanf("%i", &num);

		if(num != 0) {
			
			soma = soma + num;
			cont++;

			if(num > 0) {
				pos++;
			}
			else {
				neg++;
			}
		}

	} while(num != 0);

	media = (float)soma / cont;

	printf("\nA media aritmetica e: %.2f", media);

	printf("\nForam digitados:");
	printf("\n%i positivos", pos);
	printf("\n%i negativos", neg);

	printf("\n\nPercentuais:");

	printf("\n%.2f%% positivos", (float)(pos*100)/cont);

	printf("\n%.2f%% negativos", (float)(neg*100)/cont);

	return 0;
}
