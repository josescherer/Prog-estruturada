#include <stdio.h>

int main (){
	float sl,perc,add_sl,nv_sl;
	
	printf("Digite o salario atual: ");
	scanf("%f", &sl);
	printf("Digite o percentual de aumento: ");
	scanf("%f",&perc);
	
	add_sl = sl*(perc/100.0);
	nv_sl = sl + add_sl;
	
	printf("\nO novo salario do funcionario: $%.2f\nCom um aumento de: $%.2f",nv_sl, add_sl);
	return 0;
}
