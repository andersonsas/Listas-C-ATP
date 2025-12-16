/*
    Leia uma matriz 4 x 4 e troque os valores da 1ª.linha pelos da 4ª.coluna, vice-e-versa.
    Escrever ao final a matriz obtida
*/

#include <stdio.h>

void ler_matriz(int t, int m[][t]);
void imprimir_matriz(int t, int v[][t]);

void trocar(int, int, int t, int m[][t]);

int main()
{
    // variáveis
    const int t = 4;
    int M[t][t];

    ler_matriz(t, M); // leitura
    imprimir_matriz(t, M); // exibição
    trocar(1, 4, t, M); // processamento
    imprimir_matriz(t, M); // exibição
    return 0;
}

void trocar(int linha, int coluna, int tamanho, int m[][tamanho]) {
    int temp = 0, i = 0;

    while (i < tamanho) {
        temp = m[linha - 1][i];
        m[linha - 1][i] = m[coluna - 1 - i][coluna - 1];
        m[coluna - 1 - i][coluna - 1] = temp;
        i++;
    }
}


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