/*
    Faça um programa que leia dois números a e b (positivos menores que 10000) e:
    -   Crie um vetor onde cada posição é um algarismo do número.
        A primeira posição é o algarismo menos significativo;
    -   Crie um vetor que seja a soma de a e b, mas faça-o
        usando apenas os vetores construídos anteriormente.
    Dica: some as posições correspondentes. Se a soma ultrapassar 10,
    subtraia 10 do resultado e some 1 à próxima posição.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5


void inverter(int, int[]);
void _imprimirVetor(int[], int);
int lerValidados(int, int);
int isNumeros(char[]);

int main()
{
    unsigned int a = 0, b = 0;
    int vetA[TAM] = { 0 }, vetB[TAM] = { 0 }, vetSOMA[TAM] = { 0 };

    printf("A: ");
    a = lerValidados(10000, TAM);
    inverter(a, vetA);

    printf("B: ");
    b = lerValidados(10000, TAM);
    inverter(b, vetB);

    // soma dos dois vetores
    int vaiUM = 0;
    for (int j = 0; j < TAM; j++) {
        int soma = 0;
        soma = vetA[j] + vetB[j] + vaiUM;
        if (soma >= 10) {
            vetSOMA[j] = soma - 10;
            vaiUM = 1;
        } else {
            vetSOMA[j] = soma;
            vaiUM = 0;
        }
    }

    printf("\nVetor A: ");
    _imprimirVetor(vetA, TAM);

    printf("\nVetor B: ");
    _imprimirVetor(vetB, TAM);

    printf("\nVetor Soma: ");
    _imprimirVetor(vetSOMA, TAM);

    return 0;
}

void inverter(int digito, int guardar_no_vetor[]) {
    int i = 0;
    while (digito > 0) {
        guardar_no_vetor[i++] = digito % 10;
        digito /= 10;
    }
}

void _imprimirVetor(int vetor[], int tamanho) {
    for (int k = 0; k < tamanho; k++) {
        printf("\t%d ", vetor[k]);
    }
}

int isNumeros(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            return 0;
        }
    }
    return 1;
}

int lerValidados(int limite, int tamanho) {
    char str[tamanho];
    int num;

    do {
        printf("digite: ");
        scanf(" %s", &str);
        if (!isNumeros(str)) {
            num = -1;
            continue;
        }
        num = atoi(str);
    } while (num >= limite || num < 0);
    return num;
}