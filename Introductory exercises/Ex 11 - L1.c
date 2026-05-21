/*O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de
lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que
recebe o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual
de impostos, calcule e mostre: 
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo.*/

#include <stdio.h>

int main(){
	float preco_fab, perc_dist,perc_imposto,luc_dist,imposto, preco_final;
	
	printf("Digite o preco de fabrica do carro: ");
	scanf("%f",&preco_fab);
	printf("percentual de lucro do distribuidor: ");
	scanf("%f",&perc_dist);
	printf("percentual de impostos: ");
	scanf("%f",&perc_imposto);
	
	luc_dist = preco_fab * (perc_dist/100);
	imposto = preco_fab * (perc_imposto/100);
	preco_final = preco_fab + imposto + luc_dist;
	
	printf("-------------------------\nO lucro do distribuidor: %.2f\nO imposto sobre o preco de fabrica: %.2f\nO preco final do veiculo: %.2f", luc_dist,imposto,preco_final);
	return 0;	
}
