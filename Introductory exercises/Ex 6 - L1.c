#include <stdio.h>
#include <math.h>

int main (){
	double c1, c2, hp;
	
	printf("Digite o cateto adjacente: ");
	scanf("%lf",&c1);
	printf("Digite o cateto oposto: ");
	scanf("%lf",&c2);
	
	hp = sqrt(pow(c1,2) + pow(c2,2));
	
	printf("Hipotenusa: %.2lf",hp);
	return 0;	
}
