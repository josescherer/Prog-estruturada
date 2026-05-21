#include <stdio.h>

int main (){
	int n1, n2, n3;
	float md;
	printf("DIGITE TRES NUMEROS: ");
	scanf("%i %i %i",&n1, &n2, &n3);
	
	md=(n1+n2+n3) / 3.0;
	
	printf("Media: %f",md);
	return 0;
}
