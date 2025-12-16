/*
    Faça um programa que leia um vetor de 10 posições e
    verifique se existem valores iguais e os escreva.
*/

#include <stdio.h>
#define TAM 10

void ler(int[], int);
void mostrar_repetidos(int[], int);

int main()
{
    int vetor[TAM];

    printf("Insira %d valores para o vetor: \n", TAM);
    ler(vetor, TAM);

    mostrar_repetidos(vetor, TAM);
    return 0;
}

void ler(int v[], int t) {
    for (int i = 0; i < t; i++) {
        printf("%d°: ", i + 1);
        scanf("%d", &v[i]);
    }
}

void mostrar_repetidos(int v[], int tam) {
    int repetidos[tam]; // vetor de booleanos
    for (int i = 0; i < tam - 1; i++) {
        if (repetidos[i] == 1) continue;
        int k = 0;
        for (int j = i + 1; j < tam; j++) {
            if (v[i] == v[j]) { // arranjo comparativo
                if (k++ < 1) printf("%d ", v[i]); // imprime uma vez por valor
                repetidos[j] = 1;
            }
        }
    }
}
