/*Escreva um programa que permita imprima os triângulos apresentados a seguir. Para a
impressão, utilize loops for para gerar os padrões. Todos os asteriscos (*) devem ser
impressos por uma única instrução printf na forma printf(“*”); (faz com que os
asteriscos sejam impressos lado a lado).
Permita que o usuário escolha qual o triângulo ele deseja imprimir (A ou B) e que a impressão
possa ser feita várias vezes (imprimir vários triângulos com tamanhos diferentes).*/

#include<stdio.h>
#include<locale.h>

int main (){
int tam, i, j;
    char tipo;

    setlocale(LC_ALL,"Portuguese");

    for(;;) {
        for(;;) {
            printf("Determine o tamanho do triangulo (0 para SAIR) : ");
            scanf("%i", &tam);
            
            if(tam>=0) {
                break;
            }
	
            printf("\nINVALIDO!\n");
        }

        if(tam==0) {
            break;
        }

       
        for(;;) {

            printf("Determine o tipo (A ou B): ");
            scanf(" %c", &tipo); 

            if(tipo=='A' || tipo=='a' || tipo=='B' || tipo=='b') {
                break;
            }

            printf("\nINVALIDO!\n");
        }
        
        switch(tipo) {
        	case 'a':
        	case 'A':

        		for(i=1; i<=tam; i++) {
                    for(j=0; j<i; j++) {
                        printf("*");
                    }
                    printf("\n");
                }
                break;
                
		case 'b':
        	case 'B':

        		for(i=tam; i>0; i--) {
                    for(j=0; j<i; j++) {
                        printf("*");
                    }
                    printf("\n");
                }
                break;
				
		}
	}		

}
