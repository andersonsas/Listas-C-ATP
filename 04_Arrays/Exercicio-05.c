/*
    Faça um programa para ler a nota da prova de 15 alunos, calcule e imprima a média geral.
    OBS: Tente fazer o programa usando funções, usando uma função para ler as notas e outra
    para calcular a média.
*/

#include <stdio.h>
#define TAM 15

void lerNotas(float[], int);
float media(float[], int);

int main()
{
    float notas[TAM], media_turma = 0;
    int a = 3, b = 7;

    printf("Insira as notas dos %d alunos\n", TAM);
    lerNotas(notas, TAM);

    media_turma = media(notas, TAM);

    printf("A média da turma de %d alunos é: %.2f pontos", TAM, media_turma);

    return 0;
}

void lerNotas(float notas[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
}

float media(float notas[], int tamanho) {
    float somatario = 0;
    for (int i = 0; i < tamanho; i++) {
        somatario += notas[i];
    }
    return (somatario / tamanho);
}