/*
    Leia uma matriz 8 x 8 e escreva o maior elemento da diagonal principal
    e a soma dos elementos da diagonal secundaria.
*/

#include <stdio.h>
#define N 2

int main()
{
    int M[N][N], i, j;
    int diagonal_principal[100] = {};
    int diagonal_secundario[100] = {};

    printf("Preenchimento da matriz quadrada de %d\n", N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("A(%d, %d) = ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    // verificando valor maior
    int maior = M[0][0];
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (M[i][j] > maior) {
                M[i][j] = maior;
            }
        }
    }
    printf("\nMaior valor da diagonal principal: %d\n", maior);

    int soma_secundario = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i + j == N - 1) { // Soma dos índices igual tamanho da matriz.
                soma_secundario += M[i][j];
            }
        }
    }
    printf("Somatório da diagonal secundário: %d", soma_secundario);

    return 0;
}