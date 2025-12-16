/*
    Considere um vetor A com 11 elementos onde A1 < A2 < _ _ _ < A6 > A7 > A8 >_ _ _ > A11, ou seja, está
    ordenado em ordem crescente até o sexto elemento, e a partir desse elemento está ordenado em ordem
    decrescente. Dado o vetor da questão anterior, proponha um algoritmo para ordenar os elementos.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 11

// Função de comparação para qsort
int compara(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int A[TAM], bitonico[TAM];
    int i;

    // Leitura do vetor
    printf("Digite %d números:\n", TAM);
    for (i = 0; i < TAM; i++) {
        scanf("%d", &A[i]);
    }

    // Ordena o vetor
    qsort(A, TAM, sizeof(int), compara);

    // Divide e monta o vetor
    int meio = 1 + TAM / 2;
    for (i = 0; i < meio; i++) {
        bitonico[i] = A[i]; // parte crescente
    }
    for (i = meio; i < TAM; i++) {
        bitonico[i] = A[TAM - (i - meio) - 1]; // parte decrescente
    }

    // Exibe o vetor 
    printf("Vetor :\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", bitonico[i]);
    }
    printf("\n");

    return 0;
}