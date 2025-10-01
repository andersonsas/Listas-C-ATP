/*
    Ler uma sequência de números inteiros (com números positivos e negativos) do teclado, sequência esta que
    termina com o número zero e armazene num vetor. Escrever o número de elementos positivos e o número de
    elementos negativos presentes na sequência.
*/

#include <stdio.h>

int main()
{
    int vetor[100]; // Vetor para armazenar os números

    int positivo = 0, negativo = 0; // Contadores para positivos e negativos
    int i = 0;
    do {
        printf("Digite um número (0 para terminar): ");
        scanf("%d", &vetor[i]);
        if (vetor[i] == 0) break;

        if (vetor[i] > 0)
            positivo++;
        else if (vetor[i] < 0)
            negativo++;
        i++;

    } while (1);

    // Imprimindo os resultados
    printf("Número de elementos positivos: %d\n", positivo);
    printf("Número de elementos negativos: %d\n", negativo);

    return 0;
}