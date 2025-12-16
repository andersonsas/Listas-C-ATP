/*
    Construa uma estrutura aluno com nome, numero de matrıcula e curso. Leia do usuário
    a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na
    tela.
*/

#include <stdio.h>

#define MAX_ALUNOS 5

struct aluno {
    char nome[50];
    int matricula;
    char curso[50];
};

void lerAlunos(struct aluno  alunos[MAX_ALUNOS]);

void imprimirAlunos(struct aluno  alunos[5]);

int main()
{
    struct aluno alunos[MAX_ALUNOS];

    lerAlunos(alunos);

    imprimirAlunos(alunos);

    return 0;
}

void imprimirAlunos(struct aluno  alunos[5])
{
    printf("\nDados dos Alunos:\n");
    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s", alunos[i].curso);
        printf("\n");
    }
}

void lerAlunos(struct aluno  alunos[MAX_ALUNOS])
{
    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Digite o numero de matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        getchar(); // Limpar o buffer do teclado

        printf("Digite o curso do aluno %d: ", i + 1);
        fgets(alunos[i].curso, sizeof(alunos[i].curso), stdin);
    }
}