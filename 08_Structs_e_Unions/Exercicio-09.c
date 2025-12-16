/*
    Faça um programa que leia os dados de 10 alunos (Nome, matricula, Media Final),
    armazenando em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos
    vetores, o vetor dos aprovados e o vetor dos reprovados, considerando a media mínima
    para a aprovação como sendo 5.0. Exibir na tela os dados do vetor de aprovados,
    seguido dos dados do vetor de reprovados.
*/

#include <stdio.h>
#define MAX_ALUNOS 10
#define MAX_NOME 100
#define MAX_MATRICULA 20

typedef struct {
    char nome[MAX_NOME];
    char matricula[MAX_MATRICULA];
    float mediaFinal;
} Aluno;

void lerAlunos(Aluno alunos[], int n);
void separarAlunos(const Aluno alunos[], int n, Aluno aprovados[], int *numAprovados, Aluno reprovados[], int *numReprovados);
void exibirAlunos(const Aluno alunos[], int n);

int main() {
    Aluno alunos[MAX_ALUNOS];
    Aluno aprovados[MAX_ALUNOS];
    Aluno reprovados[MAX_ALUNOS];
    int numAprovados = 0, numReprovados = 0;

    lerAlunos(alunos, MAX_ALUNOS);
    separarAlunos(alunos, MAX_ALUNOS, aprovados, &numAprovados, reprovados, &numReprovados);

    printf("\n--- Alunos Aprovados ---\n");
    exibirAlunos(aprovados, numAprovados);

    printf("\n--- Alunos Reprovados ---\n");
    exibirAlunos(reprovados, numReprovados);

    return 0;
}

void lerAlunos(Aluno alunos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Digite a matrícula do aluno %d: ", i + 1);
        fgets(alunos[i].matricula, sizeof(alunos[i].matricula), stdin);

        printf("Digite a média final do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].mediaFinal);
        getchar(); // Limpar o buffer do teclado
    }
}

void separarAlunos(const Aluno alunos[], int n, Aluno aprovados[], int *numAprovados, Aluno reprovados[], int *numReprovados) {
    for (int i = 0; i < n; i++) {
        if (alunos[i].mediaFinal >= 5.0) {
            aprovados[*numAprovados] = alunos[i];
            (*numAprovados)++;
        } else {
            reprovados[*numReprovados] = alunos[i];
            (*numReprovados)++;
        }
    }
}

void exibirAlunos(const Aluno alunos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nome: %s", alunos[i].nome);
        printf("Matrícula: %s", alunos[i].matricula);
        printf("Média Final: %.2f\n\n", alunos[i].mediaFinal);
    }
}