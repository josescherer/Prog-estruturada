/*Construa um programa que receba dois números e calcule a divisão entre eles, caso seja
possível (exceto divisão por zero)*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	
	printf("Digite o primeiro número: ");
	scanf("%i",&n1);
	printf("Digite o segundo número: ");
	scanf("%i",&n2);
	
	
	if(n1%n2==0 && n2!=0) {
		printf("O resultado da divisão é %i", n1/n2);
	}
	
	else {
		printf("Não existe divisão exata!");
	}
	
	return 0;
	
}
	
	
	
	
