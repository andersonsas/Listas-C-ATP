/*
    Leia duas matrizes 20 x 20 e escreva os valores da primeira
    que ocorrem em qualquer posição da segunda.
*/

#include <stdio.h>
#define tam 20

void ler_matriz(int t, int m[][t]);
void imprimir_matriz(int t, int v[][t]);

int main()
{
    // variável
    int a[tam][tam], b[tam][tam];

    // leituras
    ler_matriz(tam, a);
    ler_matriz(tam, b);

    int p = 0;
    while (p < tam * tam) {
        int pivo = a[p / tam][p % tam];

        for (int m = 0; m < tam; m++) {
            for (int n = 0; n < tam; n++) {
                if (pivo == b[m][n])
                    printf("%d  ", a[p / tam][p % tam]);
            }
        }
        p++;
    }

    return 0;
}

void ler_matriz(int t, int m[][t]) {
    printf("Matriz %d x %d ,   #%d valores \n", t, t, t * t);
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