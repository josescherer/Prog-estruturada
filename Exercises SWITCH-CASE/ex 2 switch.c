#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    int ctg, aux;
    float valor, nv_valor, aumento;
    char situ, classe[20];

    /* VALIDAÇÃO DO PREÇO */

    do {
        printf("Digite o preço do produto: ");
        scanf("%f", &valor);

        aux = 0;

        if(valor <= 0) {
            printf("\nOPÇÃO INVÁLIDA!\n");
            aux = 1;
        }

    } while(aux == 1);


    /* VALIDAÇÃO DA CATEGORIA */

    do {
        printf("\nDigite a categoria:\n");
        printf("1 - Limpeza\n");
        printf("2 - Alimentação\n");
        printf("3 - Vestuário\n");
        scanf("%i", &ctg);

        aux = 0;

        if(ctg < 1 || ctg > 3) {
            printf("\nOPÇÃO INVÁLIDA!\n");
            aux = 1;
        }

    } while(aux == 1);


    /* VALIDAÇÃO DA SITUAÇÃO */

    do {
        printf("\nDigite a situação:\n");
        printf("R - Necessita refrigeração\n");
        printf("N - Não necessita refrigeração\n");
        scanf(" %c", &situ);

        aux = 0;

        if(situ != 'R' && situ != 'r' &&
           situ != 'N' && situ != 'n') {

            printf("\nOPÇÃO INVÁLIDA!\n");
            aux = 1;
        }

    } while(aux == 1);


    /* CÁLCULO DO AUMENTO */

    switch(ctg) {

        case 1:

            if(valor <= 25.0) {
                aumento = valor * 0.05;
            }
            else {
                aumento = valor * 0.12;
            }

        break;


        case 2:

            if(valor <= 25.0) {
                aumento = valor * 0.08;
            }
            else {
                aumento = valor * 0.15;
            }

        break;


        case 3:

            if(valor <= 25.0) {
                aumento = valor * 0.10;
            }
            else {
                aumento = valor * 0.18;
            }

        break;
    }


    /* NOVO VALOR */

    nv_valor = valor + aumento;


    /* CLASSIFICAÇÃO */

    if(nv_valor <= 50) {
        strcpy(classe, "Barato");
    }

    else if(nv_valor <= 120) {
        strcpy(classe, "Normal");
    }

    else {
        strcpy(classe, "Caro");
    }


    /* SAÍDA */

    printf("\n========== RESULTADO ==========\n");

    printf("Preço original: R$ %.2f\n", valor);

    printf("Valor do aumento: R$ %.2f\n", aumento);

    printf("Novo preço: R$ %.2f\n", nv_valor);

    printf("Classificação: %s\n", classe);


    return 0;
}
