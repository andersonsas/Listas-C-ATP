/*
    Faça um programa que possua um array de nome A que armazene 6 números inteiros.
    O programa deve executar os seguintes passos:
    (a) Atribua os seguintes valores a este array: 1, 0, 5, -2, -5, 7.
    (b) Armazene em uma variável inteira (simples) a soma entre os valores
        das posições A[0], A[1] e A[5] do array e mostre na tela esta soma.
    (c) Modifique o array na posição 4, atribuindo a esta posição o valor 100.
    (d) Mostre na tela cada valor do array A, um em cada linha.
*/

#include <stdio.h>

int main()
{
    int A[6] = {1, 0, 5, -2, -5, 7}; // (a) atribuição dos valores

    // (b) soma dos elementos A[0], A[1] e A[5]
    int soma = A[0] + A[1] + A[5];
    printf("Soma de A[0], A[1] e A[5]: %d\n", soma);

    // (c) modificar A[4] para 100
    A[4] = 100;

    // (d) mostrar cada valor do array A, um por linha
    printf("\nValores do array A:\n");
    for (int i = 0; i < 6; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

    return 0;
}