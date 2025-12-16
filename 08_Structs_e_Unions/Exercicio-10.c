/*
    Escolha um jogo de cartas, baseado em um ”baralho tradicional”(cada carta tem seu
    naipe e seu valor) ou tipo ”super trunfo”(cada carta possui um conjunto de atributos).
    Implemente a parte de distribuição (sorteio) de cartas para 2 jogadores, considerando
    que cada jogador ira receber 5 cartas. Exiba na tela as cartas que cada um dos
    jogadores recebeu.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define TOTAL_CARTAS 52
#define CARTAS_POR_JOGADOR 5

typedef struct {
    char valor[6];
    char naipe[10];
} Carta;

// Função para criar o baralho
void criarBaralho(Carta baralho[]) {
    const char *valores[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    const char *naipes[] = {"Copas", "Ouros", "Espadas", "Paus"};

    int k = 0;
    for (int i = 0; i < 4; i++) { // naipes
        for (int j = 0; j < 13; j++) { // valores
            strcpy(baralho[k].valor, valores[j]);
            strcpy(baralho[k].naipe, naipes[i]);
            k++;
        }
    }
}

// Função para embaralhar o baralho
void embaralhar(Carta baralho[]) {
    for (int i = 0; i < TOTAL_CARTAS; i++) {
        int r = rand() % TOTAL_CARTAS;
        Carta temp = baralho[i];
        baralho[i] = baralho[r];
        baralho[r] = temp;
    }
}

// Função para exibir cartas
void mostrarCartas(Carta cartas[], int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("%s de %s\n", cartas[i].valor, cartas[i].naipe);
    }
}

int main() {
    srand(time(NULL)); // inicializa gerador de números aleatórios

    Carta baralho[TOTAL_CARTAS];
    criarBaralho(baralho);
    embaralhar(baralho);

    Carta jogador1[CARTAS_POR_JOGADOR];
    Carta jogador2[CARTAS_POR_JOGADOR];

    // Distribuir cartas
    for (int i = 0; i < CARTAS_POR_JOGADOR; i++) {
        jogador1[i] = baralho[i];
        jogador2[i] = baralho[i + CARTAS_POR_JOGADOR];
    }

    // Mostrar cartas dos jogadores
    printf("Cartas do Jogador 1:\n");
    mostrarCartas(jogador1, CARTAS_POR_JOGADOR);

    printf("\nCartas do Jogador 2:\n");
    mostrarCartas(jogador2, CARTAS_POR_JOGADOR);

    return 0;
}