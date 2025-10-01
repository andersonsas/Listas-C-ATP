/*
    Leia 10 números inteiros e armazene em um vetor. Em seguida escreva
    os elementos que são primos e suas respectivas posições no vetor.
*/

#include <stdio.h>
#define TAM 10

int main()
{
    // variáveis
    int vetor[TAM];

    // entrada
    printf("Digite %d números inteiros para saber se alguns deles são primos.\n", TAM);
    for (int i = 0; i < TAM; i++) {
        printf("%dº entrada: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < TAM; i++) {
        int primo = 0; // flag
        int divisor = 0; // contador
        for (int j = 1; j <= vetor[i] / 2; j++) {
            if (vetor[i] % j == 0) divisor++;
        }
        if (divisor < 2)
            printf("O número %d é primo e está na posição %d\n", vetor[i], i);
    }

    return 0;
}