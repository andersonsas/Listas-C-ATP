/*
    Faça um programa que leia um número n e:
    -> Crie e leia um vetor de inteiro de n posições;
    -> Conte os múltiplos de um número inteiro x num vetor e mostre-os na tela.
    Na sua função main(), mostre quantos múltiplos foram encontrados.
*/

#include <stdio.h>

void ler(int[], int);

int main()
{
    //variáveis
    int x, multiplo_contador;
    int n[1];

    // primeira entrada
    printf("Digite o tamanho do vetor (n° inteiro): \n");
    ler(n, 1); 

    // variável
    int v[n[0]];

    // segunda entrada
    printf("Digite %d números inteiros para seu vetor: \n", n[0]);
    ler(v, n[0]); // declaração do vetor

    // processando
    printf("Digite um mímimo múltiplo comum (n° inteiro).\n");
    scanf("%d", &x);
    for (int i = 0; i < n[0]; i++) {
        if (v[i] % x == 0) {
            multiplo_contador++;
            printf("Múltiplo: %d\n", v[i]); // saída
        }
    }

    // saída
    printf("\nHá %d números que são múltiplos de %d", multiplo_contador, x);

    return 0;
}

void ler(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d° = ", i + 1);
        scanf("%d", &vetor[i]);
    }
}