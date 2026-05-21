/*escreva um programa que leia um nome e informe o tamanho deste nome, classificando-o em
curto, se possuir menos que 10 caracteres*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	int tam;
	char nome[50],classe[50];
	
	printf("Digite o seu nome: ");
	gets(nome);
	
	tam = strlen(nome);
	
	if(tam>10) {
		strcpy(classe, "é considerado CURTO");
	}
	else {
		strcpy(classe, "NÃO é considerado curto");
		
	}
	printf("O nome possui : %i : caracteres e ele %s \n ",tam,classe);

	return 0;

}
