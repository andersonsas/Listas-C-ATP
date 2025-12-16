/*
    Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores elementos entre as primeiras.
*/

#include <stdio.h>

void ler_matriz(int t, int v[][t]) {
    printf("Insira valores à matriz(%d,%d): \n", t, t);
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            printf("(%d, %d): ", i + 1, j + 1);
            scanf("%d", &v[i][j]);
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
    const int tam = 4;
    int M[tam][tam], N[tam][tam];
    int Y[tam][tam];

    // leituras
    printf("Matriz M - ");
    ler_matriz(tam, M);
    printf("Matriz N - ");
    ler_matriz(tam, N);

    // desenvolvimento
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            Y[i][j] = (M[i][j] > N[i][j]) ? M[i][j] : N[i][j];
        }
    }

    // exibição
    printf("\tM : "); imprimir_matriz(tam, M);
    printf("\tN : "); imprimir_matriz(tam, N);
    printf("\tY : "); imprimir_matriz(tam, Y);
    return 0;
}