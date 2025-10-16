/*
    Leia uma matriz 50 x 2, onde cada coluna corresponde a um lado de um triangulo retângulo.
    Declare um vetor que contenha a área dos respectivos triângulos e o escreva.
*/

#include <stdio.h>

void ler_matriz(int t1, int t2, float m[][t2]) {
    printf("Matriz %d x %d ,   #%d valores\n", t1, t2, t1 * t2);
    for (int i = 0; i < t1; i++) {
        for (int j = 0; j < t2; j++) {
            printf("triângulo #%d ", i + 1);
            printf("lado #%c: ", j == 0 ? 'A' : 'B');
            scanf("%f", &m[i][j]);
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

void imprimir_vetor(int t, float v[]) {
    for (int i = 0; i < t; i++) {
        printf("%.2f   ", v[i]);
    }
}

int main()
{
    const int nTriangulos = 50;
    float M[nTriangulos][2];
    float areas[nTriangulos];

    printf("Digite os dois lados dos catetos do triângulo: \n");
    ler_matriz(nTriangulos, 2, M);
    for (int i = 0; i < nTriangulos; i++) {
        areas[i] = M[i][0] * M[i][1] / 2;
    }
    imprimir_vetor(nTriangulos, areas);
    return 0;
}