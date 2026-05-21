#include<stdio.h>

int main () {

	int i;

	printf("0 ate 20:\n");

	for(i=0; i<=20; i++) {
		printf("[%i]\n", i);
	}

	printf("\n20 ate 0:\n");

	for(i=20; i>=0; i--) {
		printf("[%i]\n", i);
	}

	printf("\nPARES:\n");

	for(i=2; i<=20; i++) {

		if(i%2 == 0) {
			printf("[%i]\n", i);
		}
	}

	printf("\nIMPARES:\n");

	for(i=2; i<=20; i++) {

		if(i%2 != 0) {
			printf("[%i]\n", i);
		}
	}

	printf("\n40 ate 70:\n");

	for(i=40; i<=70; i++) {

		if(i%2 == 0) {
			printf("[%i] PAR\n", i);
		}
		else {
			printf("[%i] IMPAR\n", i);
		}
	}

	return 0;
}
