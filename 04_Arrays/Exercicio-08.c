/*
    Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais e os escreva.
*/

#include <stdio.h>

#define TAM 10

int main() {
    //int vetor[TAM];
    int vetor[TAM] = { 1,2,3,2,1,4,3,1,1,2 };
    int ja_exibido[TAM] = { 0 };

    printf("Identificador de valores repetidos\n");
    // Leitura do vetor
    printf("Digite %d números:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nValores repetidos:\n");
    int encontrou = 0;

    for (int i = 0; i < TAM; i++) {
        if (ja_exibido[i]) continue; // a cada iteração verifica se a posição foi marcado.

        int contador = 1; // o valor atual já conta como 1.
        for (int j = i + 1; j < TAM; j++) {
            if (vetor[i] == vetor[j]) {
                contador++; // mais um na contagem.
                ja_exibido[j] = 1; // marca como já verificado.
            }
        }


        if (contador > 1) { // se pelo menos tiver 2 ou mais na contagem
            printf("%d (aparece %d vezes)\n", vetor[i], contador); // saída
            ja_exibido[i] = 1; // deixa marcado na posição que falta.
            encontrou = 1; // uma vez que há dois ou mais, marca o flag para 1.
        }
    }

    if (!encontrou) {
        printf("Nenhum valor repetido encontrado.\n");
    }

    return 0;
}