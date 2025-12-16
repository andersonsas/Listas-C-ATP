/*
    Faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo,
    nas posições pares os valores do primeiro e nas posições impares os valores do segundo.
*/

#include <stdio.h>

#define TAM 3
#define imprimir(v, t) _imprimir(#v, v, t)

void ler(int[], int);
void _imprimir(const char*, int[], int);


int main()
{
    int a[TAM], b[TAM], c[TAM + TAM];

    printf("Digite os valores do primeiro vetor (tamanho: %d): \n", TAM);
    ler(a, TAM);
    printf("Digite os valores do segundo vetor: (tamanho: %d): \n", TAM);
    ler(b, TAM);

    int par = 0; // variável booleano
    for (int i = 0; i < (2 * TAM); i++) {
        par = (i % 2 == 0) ? 1 : 0;

        switch (par) {
            case 1:
                c[i] = a[i / 2];
                break;
            default:
                c[i] = b[i / 2];
                break;
        }
    }
    printf("----------\n");
    imprimir(a, TAM);
    imprimir(b, TAM);
    imprimir(c, TAM + TAM);

    return 0;
}

void ler(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d° = ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void _imprimir(const char* nome, int v[], int t) {
    printf("%s = { ", nome);
    for (int i = 0; i < t; i++) {
        printf("%d ", v[i]);
    }
    printf("}\n");
}