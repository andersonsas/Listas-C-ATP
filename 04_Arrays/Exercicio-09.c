/*
    Faça um programa que leia um vetor de cinco posições para números reais e, depois, um código inteiro.
    Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem direta; se for 2, mostre
    o vetor na ordem inversa. Caso, o código for diferente de 1 e 2 escreva uma mensagem falando que o código
    é inválido.
*/

#include <stdio.h>

int main()
{
    // variáveis
    float vetor[5] = { 2, 6, 5, 1, 8 };
    int codigo;

    // entrada
    for (int i = 0; i < 5; i++) {
        printf("vetor[%d] : ", i);
        scanf("%f", &vetor[i]);
    }

    // opções
    printf("Escolha o código: (0)-finalizar    (1)-direta    (2)-inversa\n");
    scanf("%d", &codigo);

    // processando
    switch (codigo) {
        case 0:
            return 0;
        case 1:
            for (int i = 0; i < 5; i++) {
                printf("%.2f ", vetor[i]);
            } break;
        case 2:
            for (int i = 4; i >= 0; i--) {
                printf("%.2f ", vetor[i]);
            } break;
        default:
            printf(" Código inválido");
            break;
    }

    return 0;
}