/*
    Utilizando estrutura, fazer um programa em C que permita a entrada de nome,
    endereço e telefone de 5 pessoas e os imprima em ordem alfabética.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define N 3

struct Ficha {
    char nome[50];
    char endereco[50];
    int telefone;
};

int strcmp(const char *str1, const char *str2);
void OrdemCrescente(struct Ficha *, int);
void LerLista(struct Ficha *);
void Imprimir(struct Ficha *, int);
void Listar(struct Ficha *, int, void (*)(struct Ficha *, int));

int main() {
    struct Ficha pessoas[N];

    LerLista(pessoas);
    Listar(pessoas, N, OrdemCrescente);

    return 0;
}

void Listar(struct Ficha *p, int tam, void (*fct)(struct Ficha *, int t)) {
    (*fct)(p, tam);
    Imprimir(p, tam);
}

void LerLista(struct Ficha *pessoas) {
    for (int i = 0; i < N; i++) {
        printf("\nDigite o nome da pessoa %d: ", i + 1);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        printf("Digite o endereco da pessoa %d: ", i + 1);
        fgets(pessoas[i].endereco, sizeof(pessoas[i].endereco), stdin);
        printf("Digite o telefone da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].telefone);
        getchar(); // Limpar o buffer do teclado
    }
}

void OrdemCrescente(struct Ficha *pessoas, int t) {
    // Ordenar em ordem alfabética pelo nome
    for (int i = 0; i < t - 1; i++) {
        for (int j = i + 1; j < t; j++) {
            if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0) {
                struct Ficha temp = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = temp;
            }
        }
    }
}

void Imprimir(struct Ficha *pessoas, int t) {
    printf("\nPessoas em ordem alfabetica:\n");
    for (int i = 0; i < t; i++) {
        printf("\nNome: %sEndereco: %sTelefone: %d\n",
            pessoas[i].nome, pessoas[i].endereco, pessoas[i].telefone);
    }
}
int strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) { // Enquanto os caracteres forem iguais
        str1++; // Avança para o próximo caractere
        str2++; // Avança para o próximo caractere
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}