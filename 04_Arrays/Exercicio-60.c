/*
    Leia uma matriz 10 x 10 e escreva a localização (linha e a coluna) do maior valor.
*/

#include <stdio.h>
#define TAM 8

int main()
{
    // variáveis
    int Matrix[TAM][TAM] = { 0 };
    int i, j, linha, coluna;

    // processando
    printf("Insira os dados da matriz %d x %d\n", TAM, TAM);
    int maior = Matrix[0][0];
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            // ler a entrada
            printf("a(%d, %d) = ", i, j);
            scanf("%d", &Matrix[i][j]);

            // verifica o maior valor
            if (Matrix[i][j] > maior) {
                maior = Matrix[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    // gráfico
    printf("Matriz = ");
    for (i = 0; i < TAM; i++) {
        printf("\n\t");
        for (j = 0; j < TAM; j++) {
            printf("\t%d", Matrix[i][j]);
        }
    }

    // exibe
    printf("\nO maior valor localiza-se na linha %d com a coluna %d", linha + 1, coluna + 1);

    return 0;
}

