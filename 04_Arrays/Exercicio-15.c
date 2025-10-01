/*
    Leia um vetor com 20 números inteiros. Escreva os elementos do vetor eliminando elementos repetidos.
*/

#include <stdio.h>
#define TAM 4

int main()
{
    // variáveis
    int v[TAM], repetido[TAM] = { 0 };
    int i, j;

    // entrada de dados
    printf("Insira %d valores: \n", TAM);
    for (i = 0; i < TAM; i++) {
        printf("%dº: ", i + 1);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < TAM; i++) {
        if (repetido[i] == 1) continue; // se marcado como já repetido, passa pro próximo loop

        for (j = i + 1; j < TAM; j++) {
            if (v[i] == v[j]) { // uma vez que sejam iguais
                repetido[j] = 1; // é marcado o indice percorrido
                if (repetido[i] == 0) repetido[i] = 1;// só marca o i na primeira vez
            }
        }
    }

    printf("Valores que não foram repetidos:\n");
    printf("{ "); // saída
    for (i = 0; i < TAM; i++) {
        if (repetido[i] == 0) {
            printf("%d ", v[i]);
        }
    }
    printf("}");

    return 0;
}