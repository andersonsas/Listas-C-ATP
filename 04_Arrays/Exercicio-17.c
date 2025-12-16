/*
    Peça ao usuário para digitar dez valores numéricos e ordene por ordem crescente estes valores,
    guardando-os num vetor. Ordene o valor assim que ele for digitado. Mostre ao final os valores
    em ordem.
*/

#include <stdio.h>
#define TAM 6

int main()
{
    // variáveis
    int vetor[TAM];
    int i, j, valor;

    for (i = 0; i < TAM; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &valor);

        // Insere o valor na posição correta
        j = i;
        while (j > 0 && vetor[j - 1] > valor) {
            vetor[j] = vetor[j - 1]; // desloca para a direita
            j--;
        }
        vetor[j] = valor; // insere na posição correta
    }

    // Exibe o vetor ordenado
    printf("\nValores em ordem crescente:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}