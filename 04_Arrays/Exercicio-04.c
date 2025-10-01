/*
    Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem valores negativos.
*/

#include <stdio.h>

int main()
{
    // variáveis
    int vetor[10];
    int i;

    // lê a entrada
    for (i = 0; i < 10; i++) {
        printf("Número [%d]: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // imprime a entrada
    printf("{ ");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf(" }\n");

    // imprime a saída
    printf("{ ");
    for (i = 0; i < 10; i++) {
        if (vetor[i] < 0) vetor[i] = 0;
        printf("%d ", vetor[i]);
    }
    printf(" }");


    return 0;
}