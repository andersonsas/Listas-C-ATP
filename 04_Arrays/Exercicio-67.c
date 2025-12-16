/*
    Leia uma matriz 5 x 5 e faça uma troca entre as diagonais superior e inferior. Escreva-a ao final.
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
    //variáveis
    const int t = 3;
    int z[t][t];

    ler(t, z); // leitura
    imprimir_matriz(t, z);

    int temp = 0;
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            if (i == j) {
                temp = z[i][j];
                z[i][j] = z[t - 1 - i][j];
                z[t - 1 - i][j] = temp;
            }
        }
    }

    imprimir_matriz(t, z); // saída
    return 0;
}