/*
    Considere uma matriz de distância entre cidades 6 x 6:

                    1               2           3               4           5           6
                (Cáceres)     (B Bugres)    (Cuiabá)      (V Grande)    (Tangará)    (P Lacerda)
1.(Cáceres)                        63          210            190                       190
2.(B Bugres)        63                         160            150           95
3.(Cuiabá)          210            160                         10
4.(V Grande)        190            150          10
5.(Tangará)                         95                                                   80
6.(P Lacerda)       190                                                     80

    Considere também um vetor de viagem indo de Cuiabá até Cáceres pela seguinte rota:

    Índice  1   2   3   4   5   6
    Cidade  3   4   2   5   6   1

    Faça um programa que leia a matriz e o vetor e calcule a distancia percorrida durante a viagem.
*/

#include <stdio.h>

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
    int Tabela[6][6] = { 0,   63,  210, 190, 0,   190,
                         63,  0,   160, 150, 95,  0,
                         210, 160, 0,   10,  0,   0,
                         190, 150, 10,  0,   0,   0,
                         0,   95,  0,   0,   0,   80,
                         190, 0,   0,   0,   80,  0 };

    int Vetor[6] = { 3, 4, 2, 5, 6, 1 }; // itinerário

    imprimir_matriz(6, Tabela);

    int Soma = 0;
    for (int i = 0; i < 5; i++) {
        Soma += Tabela[Vetor[i] - 1][Vetor[i + 1] - 1];
    }

    return 0;
}