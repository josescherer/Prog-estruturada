/*Faça um programa no qual o usuário insira valores numéricos positivos até digitar -1 e ao final
informe:
? quantos números foram digitados;
? o somatório dos valores digitados;
? quantos números pares e quantos números impares foram digitados.*/

#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");
int num, soma=0, cont=0, par=0, imp=0;

do {
printf("digite um valor: (-1 para sair) : ");
scanf("%i",&num);

if(num!=-1) {
soma=soma+num;
cont++;

if(num%2==0) {
par++;
}

else {
imp++;
}

}

}while(num!=-1);
printf("%i foram digitados", cont);
printf("\nA soma dos numeros é de : %i",soma);
printf("\nforam digitados : %i : pares : %i : impares", par, imp);

return 0;

}
