//Faça um programa que receba dois números, calcule e mostre o primeiro número elevado ao segundo

#include <stdio.h>
#include <math.h>

int main () {
	double n1,n2;
	
	printf("Digite o primeiro numero: ");
	scanf("%lf",&n1);
	printf("Digite o segundo numero: ");
	scanf("%lf",&n2);
	
	printf("Resultado: %.2f", pow(n1,n2));
	return 0;
}
