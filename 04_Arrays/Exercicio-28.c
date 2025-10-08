/*
    Faça um programa que receba do usuário um vetor x com 10 posições.
    Em seguida deverá ser impresso o maior e o menor elemento do vetor.
*/

#include <stdio.h>

#define TAM 10

void ler(int[], int);
int Maior(int[], int);
int Menor(int[], int);

int main()
{
    int X[TAM], maior, menor;

    ler(X, TAM);

    // Extraindo o maior e o menor
    maior = Maior(X, TAM);
    menor = Menor(X, TAM);

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}

void ler(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("[%d]: ", i);
        scanf("%d", &v[i]);
    }
}

int Maior(int v[], int tamanho) {
    int i = 0;
    int M = v[0];
    while (i < tamanho - 1) {
        if (M < v[++i]) // Note que o incremento é pré-fixado
            M = v[i];
    }
    return M;
}

int Menor(int v[], int tam) {
    int i = 0;
    int m = v[0];
    while (i < tam - 1) {
        if (m > v[++i]) // Note que o incremento é pré-fixado
            m = v[i];
    }
    return m;
}