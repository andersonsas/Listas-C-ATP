/*
    Leia uma matriz 6 x 6, conte e escreva quantos valores maiores que 10 ela possui.
*/

#include <stdio.h>

void ler_matriz(int t, int v[][t]) {
    printf("Insira valores à matriz(%d,%d) - %d valores: \n", t, t, t * t);
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            printf("#%d - (%d, %d): ", t * i + j + 1, i + 1, j + 1);
            scanf("%d", &v[i][j]);
        }
    }
}

int main()
{
    // variáveis
    const int t = 6;
    int m[t][t];
    int n = 0, d = 0; // n = contador de loop, d = contador de dezenas

    //leitura
    ler_matriz(t, m);

    // processamento
    while (n < t * t) {
        if (m[n / t][n % t] > 10) {
            printf("%d ", m[n / t][n % t]);
            d++;
        }
        n++;
    }

    // exibição
    printf("\n");
    printf("Há %d valores maiores do que 10 na matriz.", d);

    return 0;
}