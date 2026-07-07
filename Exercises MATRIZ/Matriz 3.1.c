/*Faça um programa que preencha uma matriz 10x3 com as notas de dez alunos em três provas.
O programa deverá mostrar um relatório com o número dos alunos (número da linha) e a
prova em que cada aluno obteve a menor nota. Ao final, o relatório, deverá mostrar quantos
alunos tiveram a menor nota em cada um das provas: prova 1, prova 2 e na prova 3.*/

#include <stdio.h> 

#define tam 10
int main () {
	float mat[tam][3], menor_nota[tam];
	int lin, col,aux, posi_menor[tam], prova1=0, prova2=0, prova3=0;
	
	for(lin=0;lin<tam;lin++) {
		printf("======= ALUNO [%i] ====== \n", lin+1);
		for(col=0;col<3;col++) {
			
			do {
				printf("Digite a nota da prova [%i]: ", col+1);
				scanf("%f",&mat[lin][col]);
				
				aux=0;
				if(mat[lin][col]<0 || mat[lin][col]>10 ) {
					printf("INVALIDO!\n");
					aux=1;
				}
				
			}while(aux==1);
			
			
			if (col==0) {
				menor_nota[lin]=mat[lin][col];
				posi_menor[lin]=0;
			}
			else {
				if(mat[lin][col]<menor_nota[lin]) {
					menor_nota[lin]=mat[lin][col];
					posi_menor[lin]=col;
				}
				
			}
		
		}
	}
	
	printf("\n====== MENORES NOTAS ======");
	for(lin=0;lin<tam;lin++) {
		
		printf("\nALUNO [%i]: prova [%i] : nota [%.2f]", lin+1, posi_menor[lin]+1, menor_nota[lin]);
		
		if(posi_menor[lin]==0) {
			prova1++;
		}
		if(posi_menor[lin]==1) {
			prova2++;
		}
		if(posi_menor[lin]==2) {
			prova3++;
		}
	}
	
	printf("\n====== RELATORIO MENORES NOTAS ======");
	printf("\n[%i] alunos PROVA 1",prova1);
	printf("\n[%i] alunos PROVA 2",prova2);
	printf("\n[%i] alunos PROVA 3",prova3);
	
	return 0;	
}
