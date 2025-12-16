/*
    Crie uma estrutura representando os alunos do curso de Introdução a Programação de
    Computadores. A estrutura deve conter a matrıcula do aluno, nome, nota da primeira
    prova, nota da segunda prova e nota da terceira prova.
    (a) Permita ao usuário entrar com os dados de 5 alunos.
    (b) Encontre o aluno com maior nota da primeira prova.
    (c) Encontre o aluno com maior media geral.
    (d) Encontre o aluno com menor media geral
    (e) Para cada aluno diga se ele foi aprovado ou reprovado,
        considerando o valor 6 para aprovação.
*/

#include <stdio.h>
#include <string.h>

#define T 3

struct curso {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
};

typedef struct {
    char nome[50];
    float nota1;
    float media;
} Aluno;

// Protótipos
void inserirAlunos(struct curso c[], int t);
Aluno maiorNota1(struct curso c[], int t);
Aluno Media(struct  curso c[], int t, Aluno(*cmp)(Aluno, Aluno));
Aluno Maior(Aluno a, Aluno b);
Aluno Menor(Aluno a, Aluno b);
void Relatorio(struct curso c[], int tam);

int main() {
    struct curso info[T];
    inserirAlunos(info, T);

    Aluno aluno_ficha = maiorNota1(info, T);
    printf("Maior nota da primeira prova: %.2f <--> %s", aluno_ficha.nota1, aluno_ficha.nome);

    Aluno maiorMedia = Media(info, T, Maior);
    printf("\nMaior Média Geral: %.2f <--> %s", maiorMedia.media, maiorMedia.nome);

    Aluno menorMedia = Media(info, T, Menor);
    printf("\nMenor Media Geral: %.2f <--> %s", menorMedia.media, menorMedia.nome);

    printf("--------------------\n");
    Relatorio(info, T);

    return 0;
}

void inserirAlunos(struct curso c[], int t) {
    for (int i = 0; i < t; i++) {
        printf("Informe os dados do aluno #%d:\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &c[i].matricula); while (getchar() != '\n');
        printf("Nome: ");
        fgets(c[i].nome, sizeof(c[i].nome), stdin);
        c[i].nome[strcspn(c[i].nome, "\n")] = '\0'; // remove \n
        printf("Nota 1: ");
        scanf("%f", &c[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &c[i].nota2);
        printf("Nota 3: ");
        scanf("%f", &c[i].nota3); while (getchar() != '\n');
        printf("\n");
    }
}

Aluno maiorNota1(struct  curso c[], int t) {
    Aluno aluno = { "A", 0, 0 };
    for (int i = 0; i < t - 1; i++) {
        if (c[i].nota1 > c[i + 1].nota1) {
            strcpy(aluno.nome, c[i].nome);
            aluno.nota1 = c[i].nota1;
        } else {
            strcpy(aluno.nome, c[i + 1].nome);
            aluno.nota1 = c[i + 1].nota1;
        }
    }
    return aluno;
}

float mediaDeUmAluno(struct curso c[], int posicao, int tam) {
    float media = 0;
    media = (c[posicao].nota1 + c[posicao].nota2 + c[posicao].nota3) / 3;
    return media;
}

Aluno Maior(Aluno a, Aluno b) {
    return a.media > b.media ? a : b;
}

Aluno Menor(Aluno a, Aluno b) {
    return a.media < b.media ? a : b;
}

Aluno Media(struct  curso c[], int t, Aluno(*cmp)(Aluno, Aluno)) {
    float mediaDeUmAluno(struct curso c[], int posicao, int tam);
    Aluno A, B; int i = 0;

    strcpy(A.nome, c[i].nome);
    A.media = mediaDeUmAluno(c, i, t);
    while (i < t - 1) {
        strcpy(B.nome, c[i + 1].nome);
        B.media = mediaDeUmAluno(c, i + 1, t);
        A = (*cmp)(A, B); i++;
    }
    return A;
}

void Relatorio(struct curso c[], int tam) {
    for (int i = 0; i < tam; i++) {
        if (mediaDeUmAluno(c, i, tam) >= 6) {
            printf("%s - %s (%.2f)\n", c[i].nome, "Aprovado", mediaDeUmAluno(c, i, tam));
        } else {
            printf("%s - %s (%.2f)\n", c[i].nome, "Reprovado", mediaDeUmAluno(c, i, tam));
        }
    }
}