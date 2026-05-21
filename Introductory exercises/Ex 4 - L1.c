#include <stdio.h>

int main(){
	float sl_base, grat, sl_bruto, imposto, sl_liquido;
	
	printf("Digite o seu salario base: ");
	scanf("%f", &sl_base);
	
	grat = sl_base*0.05;
	sl_bruto = sl_base + grat;
	
	imposto = sl_bruto * 0.07;
	sl_liquido = sl_bruto - imposto;
	
	printf("------------------------\nSALARIO BASE: %.2f\nGRATIFICAO: %.2f\nSALARIO BRUTO: %.2f\nIMPOSTO: %.2f\nSALARIO LIQUIDO: %.2f",sl_base,grat,sl_bruto,imposto,sl_liquido);	
	return 0;
}
