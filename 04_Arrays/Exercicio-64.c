/*
    Leia uma matriz 20 x 20. Leia também um valor X. O programa deverá fazer uma busca desse valor na
    matriz e, ao final escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.
*/

#include <stdio.h>

void ler_matriz(int t, int v[][t]);

int main()
{
    // variáveis
    const int t = 20;
    int x, m[t][t];

    // leituras
    ler_matriz(t, m);

    printf("Digite um valor para procurar na matriz: ");
    scanf("%d", &x);
    
    /* p = contagem de todos valores, k = contagem de nada encontrado */
    int p = 0, k = 0;
    while (p < t * t) {
        if (m[p / t][p % t] == x) {
            printf("Valor %d encontrado na...\n", x);
            printf("linha : %d\n", p / t + 1);
            printf("coluna : %d\n", p % t + 1);
        } else {
            k++;
        }
        if (k == t * t)
            printf("Nada encontrado\n");
        p++;
    }
    return 0;
}

void ler_matriz(int t, int v[][t]) {
    printf("Insira valores à matriz (%dx%d) - %d valores: \n", t, t, t * t);
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            printf("#%d - (%d, %d): ", t * i + j + 1, i + 1, j + 1);
            scanf("%d", &v[i][j]);
        }
    }
}