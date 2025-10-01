/*
    Leia um vetor com 10 números de ponto flutuante, ordene os elementos deste vetor,
    e no final escreva os elementos do vetor ordenado.
*/

#include <stdio.h>
#include <math.h>
#define TAM 3

int main()
{
    // variáveis
    float entrada[TAM]; float menor = 0; float maior = 0;

    // entrada de dados
    printf("Digite %d números reais: \n", TAM);
    for (int i = 0; i < TAM; i++) {
        printf("[%d]: ", i);
        scanf("%f", &entrada[i]);
    }


    for (int i = 0; i < TAM; i++) {
        for (int j = i + 1; j < TAM; j++) {
            if (entrada[i] > entrada[j]) {
                menor = fmin(entrada[i], entrada[j]);
                maior = fmax(entrada[i], entrada[j]);

                entrada[i] = menor;
                entrada[j] = maior;
            }
        }
    }

    for (int i = 0; i < TAM; i++) {
        printf("%.1f ", entrada[i]);
    }

    return 0;
}