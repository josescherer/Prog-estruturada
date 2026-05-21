/*Faça um programa que receba uma hora (uma variável para hora e outra para minutos),
calcule e mostre:
a) a hora digitada convertida em minutos;
b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
c) o total dos minutos convertidos em segundos*/

#include <stdio.h>

int main(){
	int hora, min, horaPmin, total_min, total_seg;
	
	printf("Digite uma hora e depois os minutos: ");
	scanf("%i %i",&hora, &min);
	
	horaPmin = hora * 60;
	total_min = horaPmin + min;
	total_seg = total_min *60;
	
	printf("hora digitada em minutos: %i\ntotal de minutos: %i\nsegundos: %i",horaPmin,total_min,total_seg);
    return 0;
}



