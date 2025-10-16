/*
    Leia uma matriz 8 x 8 e a transforme numa matriz triangular inferior, atribuindo
    zero a todos os elementos acima da diagonal principal, escrevendo-a ao final.
*/

#include <stdio.h>

void ler_matriz(int t, int m[][t]) {
    printf("Matriz %d x %d ,   #%d valores\n", t, t, t * t);
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            printf("#%d (%d,%d): ", i * t + j + 1, i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

void imprimir_matriz(int t, int v[][t]) {
    for (int i = 0; i < t; i++) {
        printf("\n\t");
        for (int j = 0; j < t; j++) {
            printf("\t%d", v[i][j]);
        }
    }
    printf("\n");
}

int main()
{
    // variáveis
    const int t = 3;
    int matrix[t][t];

    ler_matriz(t, matrix); // leitura

    // processando matriz inferior
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            if (i < j) matrix[i][j] = 0;
        }
    }

    imprimir_matriz(t, matrix); // saída
    return 0;
}