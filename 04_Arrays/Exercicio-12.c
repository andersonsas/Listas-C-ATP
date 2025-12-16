/*
    Leia 10 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2.
    Copie os valores ímpares de v para v1, e os valores pares de v para v2.
    Note que cada um dos vetores v1 e v2 têm no máximo 10 elementos, mas nem todos os elementos são utilizados.
    No final escreva os elementos UTILIZADOS de v1 e v2.
*/

#include <stdio.h>
#define TAM 10

int main()
{
    // variáveis
    int v[TAM], v1[TAM], v2[TAM];

    printf("Vetor V\n");
    for (int i = 0; i < TAM; i++) {
        printf("V[%d]: ", i);
        scanf("%d", &v[i]);
    }

    int impar = 0, par = 0;
    for (int i = 0; i < TAM; i++) {
        if (v[i] % 2 == 0) {
            v1[par] = v[i];
            par++;
        } else {
            v2[impar] = v[i];
            impar++;
        }
    }

    printf("Vetor Ímpar\n");
    for (int i = 0; i < par; i++) {
        printf("Impar[%d]: %d\n", i, v1[i]);
    }

    printf("Vetor Par\n");
    for (int i = 0; i < impar; i++) {
        printf("Par[%d]: %d\n", i, v2[i]);
    }

    return 0;
}