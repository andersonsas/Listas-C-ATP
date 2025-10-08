/*
    Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e
    com 0 os demais elementos. Escreva ao final a matriz obtida.
*/

#include <stdio.h>
#define N 3

void lerMatrizQuadrada(int t, int M[][t]);
void imprimirMatrix(int t, int M[][t]);

int main()
{
    int Matrix[N][N];

    lerMatrizQuadrada(N, Matrix);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j)
                Matrix[i][j] = 1;
            else
                Matrix[i][j] = 0;
        }
    }

    imprimirMatrix(N, Matrix);
    return 0;
}

void lerMatrizQuadrada(int t, int M[][t]) {
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            printf("M(%d, %d) = ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }
}

void imprimirMatrix(int t, int M[][t]) {
    for (int i = 0; i < N; i++) {
        printf("\n\t");
        for (int j = 0; j < N; j++) {
            printf("\t%d", M[i][j]);
        }
    }
}
