/*
    Leia uma matriz 6 x 6 e atribuir o valor 0 para os valores
    negativos encontrados fora das diagonais principal e secundaria.
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
    const int t = 6;
    int m[t][t]; ler_matriz(t, m);

    imprimir_matriz(t, m);

    // Se não for diag principal ou se não for diag secundário e for valor negativo
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            if (!(i == j || i + j == t - 1) && m[i][j] < 0) {
                m[i][j] = 0;
            }
        }
    }

    imprimir_matriz(t, m);

    return 0;
}