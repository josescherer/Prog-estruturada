// Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
// a idade desta pessoa
// b) quantos anos ela terá em 2050


#include <stdio.h>

int main () {
    int ano_nasc, ano_atual, idade, idade2050;
    
    printf("Digite o seu ano de nascimento: ");
    scanf("%i", &ano_nasc);
    
    printf("Digite o ano atual: ");
    scanf("%i", &ano_atual);
    
    idade = ano_atual - ano_nasc;
    idade2050 = 2050 - ano_nasc;
    
    printf("Sua idade atual: %i\n", idade);
    printf("Sua idade em 2050: %i\n", idade2050);
    
    return 0;
}

