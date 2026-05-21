//Faça um programa que calcule o fatorial de um número N inteiro

#include<stdio.h>

int main() {

	int num, fat = 1, i = 1;

	printf("Digite um numero: ");
	scanf("%i", &num);
	
	while(i <= num) {
		fat *= i;
		i++;
	}
	
	printf("O fatorial e %i", fat);

	return 0;
}
