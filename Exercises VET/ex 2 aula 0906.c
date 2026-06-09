/*Faça um programa que leia quatro valores digitados pelo usuário: i, a, b e c, onde:

i é um inteiro positivo (só deve ser aceito um valor positivo)
a, b e c são valores reais
Após ler os valores, o programa deve criar vetores da seguinte forma:

se i=1: o vetor 1 deve ser preenchido com a, b e c em ordem crescente;
se i=2: o vetor 2 deve ser preenchido com a, b e c em ordem decrescente;
se i=3: o vetor 3 deve ser preenchido com a, b e c de forma que o maior valor fique no meio;
se i não for nenhum dos acima, deve ser impressa uma mensagem informando isso.
Ao final, os três vetores devem ser impressos, um em cada linha.*/

int main () {
	int i, aux;
	float a,b,c;
	
	do {
		printf("Digite o valor de [ i ]: ")
		scanf("%i", &i);
		
		aux=0;
		
		if(i<=0) {
			printf("INTEIRO E POSITIVO!\n");
			aux=1;
		}
			
	}while(aux==1);	
	
	}
	
	//SORA NÂO DEU TEMPO DE FAZER AINDA
	
	
	
}
