#include <stdio.h>

int main(){
	float kg, gm;
	
	printf("Digite o seu peso em kg: ");
	scanf("%f",&kg);
	
	gm = kg*1000.0;
	
	printf("O seu peso em gramas: %.2f", gm);
	return 0;
}
