/*
    Leia dois vetores de inteiros X e Y, cada um com 5 elementos (assuma que o usuário não informa elementos
    repetidos). Calcule e mostre os vetores resultantes em cada caso abaixo:
        * Soma entre X e Y: soma de cada elemento de X com o elemento da mesma posição em Y.
        * Produto entre X e Y: multiplicação de cada elemento de X com o elemento da mesma posição em Y.
        * Diferença entre X e Y: todos os elementos de X que não existam em Y.
        * Interseção entre X e Y: apenas os elementos que aparecem nos dois vetores.
        * União entre X e Y: todos os elementos de X, e todos os elementos de Y que não estão em X.

*/

#include <stdio.h>
#define N 5

int main()
{
    int X[N], Y[N];
    int i, j;

    //leitura do vetor X
    printf("Digite 5 elementos para o vetor X:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }

    //leitura do vetor Y
    printf("Digite 5 elementos para o vetor Y:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &Y[i]);
    }

    //soma
    printf("\nSoma entre X e Y: ");
    for (i = 0; i < N; i++) {
        printf("%d ", X[i] + Y[i]);
    }

    //Produto
    printf("\nProduto entre X e Y: ");
    for (i = 0; i < N; i++) {
        printf("%d ", X[i] * Y[i]);
    }

    // diferença
    printf("\nDiferenca (X - Y): ");
    for (i = 0; i < N; i++) { // o valor da vez
        int existe = 0; // de ínicio não existe
        for (j = 0; j < N; j++) { // ao procurar por todo outro conjunto
            if (X[i] == Y[j]) { // e se encontrar o mesmo valor
                existe = 1; // é marcado como valor existente
                break; // logo em seguida
            }
        }
        if (!existe) { // se o valor não existe
            printf("%d ", X[i]); // imprime o valor da vez.
        }
    }

    // interseção
    printf("\nIntersecao entre X e Y: ");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (X[i] == Y[j]) {
                printf("%d ", X[i]);
            }
        }
    }

    // união
    printf("\nUnião entre X e Y: ");
    // todos os elementos de X
    for (i = 0; i < N; i++) {
        printf("%d ", X[i]);
    }
    // elementos de Y que não estão em X
    for (i = 0; i < N; i++) {
        int existe = 0;
        for (j = 0; j < N; j++) {
            if (Y[i] == X[j]) {
                existe = 1;
                break;
            }
        }
        if (!existe) {
            printf("%d ", Y[i]);
        }
    }
    printf("\n");

    return 0;
}