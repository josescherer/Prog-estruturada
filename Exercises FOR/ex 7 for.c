/*Faça um programa que leia 30 valores entre 1 e 9. Seu programa deverá contar a ocorrência de
cada valor informado pelo usuário e ao final informar estes valores utilizando *. Por exemplo, se
o número 2 for informado 5 vezes, a segunda linha de seu resultado deverá ser *****. (seu
programa deverá utilizar o switch-case).*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {

    setlocale(LC_ALL, "Portuguese");
    int num,i,aux,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0,cont7=0,cont8=0,cont9=0;
    
    for(i=0;i<10;i++) {
    	do {
        printf("Digite 30 números (entre 1 e 9) : [%i] : ",i+1);
        scanf("%i", &num);
        aux = 0;

        if(num<1 || num>9 ) {
            printf("\nOPÇÃO INVÁLIDA!\n");
            aux = 1;
        }

    } while(aux == 1);
    	switch(num) {
    		case 1:
    			cont1++;
    			break;
    		case 2:
    			cont2++;
    			break;
			case 3:
				cont3++;
    			break;
			case 4:
				cont4++;
    			break;
    		case 5:
    			cont5++;
    			break;
			case 6:
				cont6++;
    			break;
			case 7:
				cont7++;
    			break;
    		case 8:
    			cont8++;
    			break;
			case 9:
				cont9++;
    			break;		
    		
		}
	}
		/* SAÍDA */

	printf("\n1: ");
	for(i=0; i<cont1; i++){
    printf("*");
	}

	printf("\n2: ");
	for(i=0; i<cont2; i++){
    printf("*");
	}

	printf("\n3: ");
	for(i=0; i<cont3; i++){
    printf("*");
	}

	printf("\n4: ");
	for(i=0; i<cont4; i++){
    printf("*");
	}

	printf("\n5: ");
	for(i=0; i<cont5; i++){
    printf("*");
	}

	printf("\n6: ");
	for(i=0; i<cont6; i++){
    printf("*");
	}

	printf("\n7: ");
	for(i=0; i<cont7; i++){
    printf("*");
	}

	printf("\n8: ");
	for(i=0; i<cont8; i++){
    printf("*");
	}

	printf("\n9: ");
	for(i=0; i<cont9; i++){
    printf("*");
	}	
	return 0;	
}
