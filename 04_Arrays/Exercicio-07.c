/*
    Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada.
    Crie um novo array C calculando C = A - B. Mostre na tela os dados do array C.
*/

#include <stdio.h>
#define TAM 10

int main()
{
    int A[TAM], B[TAM], c[TAM];

    // declarando entrada
    printf("Preenchendo o primeiro vetor (Vetor A)\n");
    for (int i = 0; i < TAM; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }
    printf("\n");
    printf("Preenchendo o primeiro vetor (Vetor B)\n");
    for (int i = 0; i < TAM; i++) {
        printf("B[%d] = ", i);
        scanf("%d", &B[i]);
    }
    printf("\n");

    // finalizando
    printf("Vetor A - Vetor B\n");
    for (int i = 0; i < TAM; i++) {
        c[i] = A[i] - B[i]; // calculando

        printf("\nC[%d]= %d", i, c[i]); // exibindo
    }

    return 0;
}