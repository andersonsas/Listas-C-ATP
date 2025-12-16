/*
    Escreva um programa que leia n números inteiros no intervalo [0,50] e os armazene em um
    vetor estaticamente alocado com 100 posições. Preencha um segundo vetor, também alocado
    estaticamente, apenas com os números ímpares do primeiro vetor. Imprima os dois vetores,
    10 elementos por linha.
*/

#include <stdio.h>
#define TAMANHO 100

int main() {
    // variaveis
    int valores[TAMANHO] = { 0 }, impares[TAMANHO] = { 0 };
    int i, j = 0;

    // solitação de dados
    printf("Entre com números inteiros entre 0 e 50\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("[%dº]: ", i + 1);
        scanf("%d", &valores[i]); // entrada

        if (valores[i] < 0 || valores[i] > 50) {
            printf("Valor fora do intervalo. Tente novamente.\n");
            i--; // repete a leitura
            continue;
        }

        if (valores[i] % 2 == 1) { // detecta entrada ímpar
            impares[j++] = valores[i]; // armazena o valor na posicão
        }
    }

    // saídas
    printf("Valores digitados: { ");
    for (i = 0; i < 10; i++) {
        printf("%d ", valores[i]);
    }
    printf("}\n");

    printf("Valores impares: { ");
    for (i = 0; i < 10; i++) {
        printf("%d ", impares[i]);
    }
    printf("}");

    return 0;
}