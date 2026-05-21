/*Construa um programa que leia o nome e o sexo de uma pessoa e construa e apresente uma
string com o texto “BOM DIA SR. <NOME>” caso o sexo seja masculinho, e “BOM DIA SRA.
<NOME>” caso o sexo seja feminino.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int aux;
	char nome[50],sexo;
	
	printf("Digite o seu nome: ");
	scanf(" %[^\n]s",nome);
	
	do {
	printf("Digite qual pronome você prefere ser tratado : [M]para masculino ou [F]para feminino : ");
	scanf(" %c",&sexo);
	
	if (sexo == 'M' || sexo == 'm') {
		printf("BOM DIA SR. %s", nome);		
		aux=0;
	}
	
	else if (sexo == 'F' || sexo == 'f') {
		printf("BOM DIA SRA. %s", nome);
		aux=0;
	}
	
	else {
		printf("Sexo inválido!\n\n");
		aux=1;
	}
	 
    }while(aux==1);
	
	return 0;
	
}

