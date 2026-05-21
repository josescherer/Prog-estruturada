/* Faça um programa que leia um número e imprima a raiz quadrada do número, caso ele seja
positivo ou igual a zero; e o quadrado do número, caso ele seja negativo*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1;
	
	printf("Digite um numero: ");
	scanf("%f", &n1);
		
	if (n1 >= 0) {
		printf("A raiz quadrada de %.2f é %.2f", n1, sqrt(n1));
	}
	else {
		printf("O quadrado de %.2f é  %.2f", n1, pow(n1,2));
	}
	
	return 0;
}

