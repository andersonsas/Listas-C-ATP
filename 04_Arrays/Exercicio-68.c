/*
    Leia duas matrizes 10 x 10 e faça uma substituição entre a
    diagonal inferior da primeira com a diagonal superior da segunda.
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
    const int t = 10;
    int a[t][t], b[t][t];

    // leituras
    ler_matriz(t, a);
    ler_matriz(t, b);

    //exibições
    imprimir_matriz(t, a);
    imprimir_matriz(t, b);

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            if (i >= j) {
                a[i][j] = b[j][i];
            }
        }
    }

    imprimir_matriz(t, a); // saída
    return 0;
}