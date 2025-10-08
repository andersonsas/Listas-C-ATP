/*
    Faça um programa que leia dois números n e m e:
    •   Crie e leia um vetor de inteiros de n posições;
    •   Crie e leia um vetor de inteiros de m posições;
    •   Crie e construa um vetor de inteiros que seja a interseção entre os dois vetores
        anteriores, ou seja, que contém apenas os números que estão em ambos os vetores.
        Não deve conter números repetidos.

    Na sua função main(), imprima os três vetores criados.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ler(int[], int);
void _imprimirVetor(int[], int);
int existe(int[], int, int);
int intersecao(int[], int, int[], int, int[]);

int main()
{
    //variáveis
    int n[1], m[1], tamanho_intersecao;

    // entrada das opcões de tamanho dos vetores
    printf("Digite o tamanho do primeiro vetor (n° inteiro): \n");
    ler(n, 1);
    printf("Digite o tamanho do segundo vetor (nº inteiro).  \n");
    ler(m, 1);

    // declaração dos vetores
    int vetor1[n[0]], vetor2[m[0]], vetor_intersecao[n[0] + m[0]];

    // entrada dos valores dos vetores
    printf("Digite os valores do primeiro vetor: \n");
    ler(vetor1, n[0]);

    printf("Digite os valores do segundo vetor: \n");
    ler(vetor2, m[0]);

    // cálculo da interseção
    tamanho_intersecao = intersecao(vetor1, n[0], vetor2, m[0], vetor_intersecao);

    // impressão dos vetores
    printf("Vetor 1, Vetor 2 e Interseção: \n");
    _imprimirVetor(vetor1, n[0]);
    _imprimirVetor(vetor2, m[0]);
    _imprimirVetor(vetor_intersecao, tamanho_intersecao);

    return 0;
}

// funções de leitura
void ler(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d° = ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

// função que calcula a interseção entre dois vetores
int intersecao(int v1[], int t1, int v2[], int t2, int v_intersecao[]) {
    int k = 0;
    for (int i = 0; i < t1; i++) {
        for (int j = 0; j < t2; j++) {
            if (v1[i] == v2[j]) {
                if (!existe(v_intersecao, k, v1[i])) {
                    v_intersecao[k] = v1[i];
                    k++;
                }
            }
        }
    }
    return k;
}

// função que verifica se um valor existe em um vetor
int existe(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return 1;
        }
    }
    return 0;
}

// função que imprime um vetor
void _imprimirVetor(int vetor[], int tamanho) {
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}