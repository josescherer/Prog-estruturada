#include <stdio.h>
#include <math.h>

int main(){
	double n1;
	
	printf("Digite um numero (REAL E POSITIVO): ");
	do {
		scanf("%lf",&n1);
		if (n1<=0){
			printf("!REAL E POSITIVO!: ");
		}
	}while (n1<=0);
	printf("\n----------------------------\n");
	printf("O quadrado de %.2f: %.2f\n", n1, pow(n1,2));
	printf("O cubo de %.2f: %.2f\n", n1, pow(n1,3));
	printf("A raiz quadrada de %.2f: %.2f\n", n1, sqrt(n1));
	printf("A raiz cubica de %.2f: %.2f\n", n1, cbrt(n1));
	
	return 0;
}
