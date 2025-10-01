/*
    Escreva um programa que leia 10 números inteiros e os armazene em um vetor. 
    Imprima o vetor, o maior elemento e a posição que ele se encontra.
*/

#include <stdio.h>
#define TAMANHO 10

int main() {
    // variaveis
    int n, maior = 0, maior_indice = 0;
    int vetor[TAMANHO];

    printf("Digite 10 números inteiros\n");
    for (int i = 0; i < TAMANHO; i++) { // de 0 a 9 posições
        printf("Digite um número inteiro [%d]: ", i + 1); // instrui o usuário a entrar com dados
        scanf("%d", &n); // ler a entrada
        vetor[i] = n; // salva na posição atual
        if (n > maior) { // verifica se valor dado é maior do que o atual
            maior = n; // atualiza o valor do maior
            maior_indice = i; // e salva sua posição
        }
    }

    // imprime os valores do vetor
    printf("\nVetor[10] = { ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("}\n");

    // imprime informação do maior
    printf("Maior elemento é %d na posição %d", vetor[maior_indice], maior_indice);

    // visualização tabelada
    printf("\n\n%s\t%s", "Índice", "Valor");
    for (int i = 0; i < TAMANHO; i++) {
        printf("\n%3d\t%3d ", i, vetor[i]);
        if (maior_indice == i) printf("%s", " <--- Maior Valor");
    }
    return 0;
}