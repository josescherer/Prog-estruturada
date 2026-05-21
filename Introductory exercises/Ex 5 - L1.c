#include <stdio.h>

int main(){
	int dia, mes, ano, dias_vida;
	char nome[40];
	
	printf("Digite o seu nome: ");
	gets(nome);
	printf("Digite a sua data de nascimento: (DD/MM/AAAA) ");
	scanf("%i %i %i",&dia, &mes, &ano);
	
	dias_vida = (2026 - ano) * 365;
    dias_vida += (3 - mes) * 30;
    dias_vida += (23 - dia);
	
	printf("%s viveu %i dias",nome, dias_vida);
    return 0;
}
