/*
    Fazer um programa para simular uma agenda de telefones.
    Para cada pessoa devem-se ter os seguintes dados:
    - Nome
    - Endereço

    Endereço (contendo campos para Rua, numero, complemento, bairro, cep, cidade, estado, paıs).
    Telefone (contendo campo para DDD e numero).
    Data de aniversario (contendo campo para dia, mês, ano).

    Observações: Uma linha (string) para alguma observação especial.

    (a) Definir as estruturas acima.
    (b) Declarar a variável agenda (vetor) com capacidade de agendar ate 100 nomes.
    (c) Definir um bloco de instruções busca por primeiro nome:
        Imprime os dados da pessoa com esse nome (se tiver mais de uma pessoa, imprime para todas).
    (d) Definir um bloco de instruções busca por mês de aniversario:
        Imprime os dados de todas as pessoas que fazem aniversario nesse mês.
    (e) Definir um bloco de instruções busca por dia e mês de aniversario:
        Imprime os dados de todas as pessoas que fazem aniversario nesse dia e mês.
    (f) Definir um bloco de instruções insere pessoa: Insere por ordem alfabética de nome.
    (g) Definir um bloco de instruções retira pessoa: retira todos os dados dessa pessoa e
        desloca todos os elementos seguintes do vetor para a posição anterior.
    (h) Definir um bloco de instruções imprime agenda com as opções:
        imprime nome, telefone e e-mail.
        imprime todos os dados.
    (i) O programa deve ter um menu principal oferecendo as opções acima.
*/

#include <stdio.h>
#include <string.h>

#define MAX 100

struct pessoa {
    char nome[50];
    struct endereco {
        char rua[50];
        int numero;
        char complemento[30];
        char bairro[30];
        char cep[10];
        char cidade[30];
        char estado[30];
        char pais[30];
    } end;
    struct telefone {
        char ddd[5];
        char numero[15];
    } tel;
    struct data_aniversario {
        int dia;
        int mes;
        int ano;
    } aniversario;
    char observacoes[100];
};

void buscarPorPrimeiroNome(struct pessoa *agenda, int total, const char *nomeBusca) {
    for (int i = 0; i < total; i++) {
        char primeiro_nome[50];
        strcpy(primeiro_nome, strtok(agenda->nome, " "));

        if (strcmp(primeiro_nome, nomeBusca) == 0) {
            printf("Nome: %s\n", agenda[i].nome);
            printf("Endereco: %s, %d, %s, %s, %s, %s, %s, %s\n",
                agenda[i].end.rua, agenda[i].end.numero, agenda[i].end.complemento,
                agenda[i].end.bairro, agenda[i].end.cep, agenda[i].end.cidade,
                agenda[i].end.estado, agenda[i].end.pais);
            printf("Telefone: (%s) %s\n", agenda[i].tel.ddd, agenda[i].tel.numero);
            printf("Data de Aniversario: %02d/%02d/%04d\n",
                agenda[i].aniversario.dia, agenda[i].aniversario.mes, agenda[i].aniversario.ano);
            printf("Observacoes: %s\n", agenda[i].observacoes);
            printf("--------------------------\n");
        }
    }
}

int main() {
    struct pessoa agenda[MAX];
    int total_pessoas = 0;

    // Exemplo de inserção de dados na agenda
    strcpy(agenda[0].nome, "Ana Silva");
    total_pessoas++;
    strcpy(agenda[1].nome, "Bruno Souza");
    total_pessoas++;
    strcpy(agenda[2].nome, "Carlos Pereira");
    total_pessoas++;

    buscarPorPrimeiroNome(agenda, total_pessoas, "Ana");


    return 0;
}

