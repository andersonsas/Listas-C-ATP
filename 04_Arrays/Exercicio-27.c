/*
    Faça um programa que leia um vetor de 8 posições e em seguida leia também dois valores
    X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá
    escrever a soma dos valores encontrados nas respectivas posições X e Y.
*/

#include <stdio.h>

void ler(int[], int);

int main()
{
    int x, y;
    int v[8];

    printf("Preencha %d números do vetor: \n", 8);
    ler(v, 8);

    printf("Escolha uma posição do vetor: ");
    scanf("%d", &x);

    printf("Escolha mais uma posição do vetor: ");
    scanf("%d", &y);

    int soma = v[x] + v[y];

    printf("A soma das duas posições escolhidas : %d", soma);

    return 0;
}

void ler(int v[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }
}