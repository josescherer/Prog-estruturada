/*Exercício de Matriz. Faça um programa em C que leia duas matrizes de 5 x 5, de números inteiros informados pelo usuário, e escreva uma terceira matriz contendo os maiores valores de cada posição das duas matrizes lidas. Imprima  as 3 matrizes no formato quadrado (5 linhas e 5 colunas).

Observe a seguir um exemplo usando matrizes de 2 x 2:

Exercício Matriz

O código-fonte da implementação deve estar em um arquivo no formato .c
Utilize os formatos de imagem .png, .jpeg ou .jpg para a impressão da tela.
Insira sempre as informações necessárias para que o usuário saiba o que deve ser feito quando executar.*/


#include <stdio.h>

int main() {
    int matriz1[5][5];
    int matriz2[5][5];
    int matriz3[5][5];
    int i, j;

    printf("=== LEITURA PRIMEIRA ===\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Matriz1[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\n=== LEITURA SEGUNDA ===\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Matriz2[%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }


    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz1[i][j] > matriz2[i][j]) {
                matriz3[i][j] = matriz1[i][j];
            } else {
                matriz3[i][j] = matriz2[i][j];
            }
        }
    }

    printf("\n=== MATRIZ 1 ===\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%4d", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\n=== MATRIZ 2 ===\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%4d", matriz2[i][j]);
        }
        printf("\n");
    }

    printf("\n=== MATRIZ DOS MAIORES VALORES ===\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%4d", matriz3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
