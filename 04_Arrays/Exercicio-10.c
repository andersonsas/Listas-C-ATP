/*
    Ler uma sequência de números reais e determinar o maior elemento desta sequência.
    A sequência termina quando for digitado o número Zero.
*/

#include <stdio.h>

int main()
{
    // variáveis
    float seq[100];
    float maior;

    // entrada e processamento
    for (int i = 0; i < 100; i++) {
        printf("[%d]: ", i);
        scanf("%f", &seq[i]);
        if (seq[i] == 0) break;

        // verifica o maior valor para atualização.
        if (i == 0 || seq[i] > maior) maior = seq[i];
    }

    // exibe
    printf("maior elemento: %.2f", maior);
    return 0;
}