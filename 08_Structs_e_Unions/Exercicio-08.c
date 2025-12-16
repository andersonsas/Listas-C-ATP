/*
    Faça um programa que armazene em um registro de dados (estrutura composta) os
    dados de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F),
    CPF, Data de Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa
    (string de ate 30 caracteres) e Salario.
    Os dados devem ser digitados pelo usuário, armazenados na estrutura e exibidos na tela.
*/

#include <stdio.h>

// Definição da estrutura para armazenar os dados do funcionário
typedef struct {
    char nome[100];
    int idade;
    char sexo; // 'M' ou 'F'
    char cpf[15];
    struct {
        int dia;
        int mes;
        int ano;
    } dataNascimento;
    int codigoSetor; // 0-99
    char cargo[30];
    float salario;
} Funcionario;

// Protótipos das funções
void LerFuncionario(Funcionario *f);
void ExibirFuncionario(const Funcionario *f);

int main()
{
    Funcionario func;

    LerFuncionario(&func);    
    return 0;
}

void ExibirFuncionario(const Funcionario *f) {
    printf("\n--- Dados do Funcionário ---\n");
    printf("Nome: %s", f->nome);
    printf("Idade: %d\n", f->idade);
    printf("Sexo: %c\n", f->sexo);
    printf("CPF: %s\n", f->cpf);
    printf("Data de Nascimento: %02d/%02d/%04d\n", f->dataNascimento.dia, f->dataNascimento.mes, f->dataNascimento.ano);
    printf("Código do Setor: %d\n", f->codigoSetor);
    printf("Cargo: %s\n", f->cargo);
    printf("Salário: R$ %.2f\n", f->salario);
}

void LerFuncionario(Funcionario *f) {
    printf("Digite o nome do funcionário: ");
    fgets(f->nome, sizeof(f->nome), stdin);

    printf("Digite a idade do funcionário: ");
    scanf("%d", &f->idade);

    printf("Digite o sexo do funcionário (M/F): ");
    scanf(" %c", &f->sexo);

    printf("Digite o CPF do funcionário: ");
    scanf("%s", f->cpf);

    printf("Digite a data de nascimento (DD MM AAAA): ");
    scanf("%d %d %d", &f->dataNascimento.dia, &f->dataNascimento.mes, &f->dataNascimento.ano);

    printf("Digite o código do setor (0-99): ");
    scanf("%d", &f->codigoSetor);

    printf("Digite o cargo do funcionário: ");
    scanf(" %30[^\n]s", f->cargo);

    printf("Digite o salário do funcionário: ");
    scanf("%f", &f->salario);

    ExibirFuncionario(f);
}