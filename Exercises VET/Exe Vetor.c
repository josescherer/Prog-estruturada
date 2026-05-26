#include <stdio.h>
#include <math.h>

int main () {
	int vet[3], vet2[3], x;
	
	for(x=0; x<3 ; x++) {
		printf("[ %i ]: ", x+1);
		scanf("%i",&vet[x]);
		
		vet2[x]=pow(vet[x],2);		
	}
	
	printf("======VET 1======\n");
	
	for(x=0; x<3 ; x++) {
		printf("%i ", vet[x]);
	}
	
	printf("\n=======VET 2=======\n");
	
	for(x=0; x<3 ; x++) {
		printf("%i ", vet2[x]);
	}
	return 0;
		
}
