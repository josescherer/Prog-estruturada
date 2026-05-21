#include <stdio.h>
#include <math.h>

int main(){
	double raio, area;
	
	printf("Digite o raio do circulo: ");
	scanf("%lf",&raio);
	
	area = pow(raio,2) * M_PI;
	
	printf("Area do circulo: %f",area);
	return 0;
}
