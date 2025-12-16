/*
    Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o número do aluno
    e o segundo representando a sua altura em metros. Encontre o aluno mais baixo e o mais alto. Mostre
    o número do aluno mais baixo e do mais alto, juntamente com suas alturas.
*/

#include <stdio.h>
#define TAM 5

#include <stdio.h>

int main()
{
    float alunos[TAM][2]; // matriz 10x2

    // lê os dados
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < 2; j++) {
            switch (j) {
                case 0:
                    printf("Digite o número do aluno %d: ", i + 1);
                    scanf("%f", &alunos[i][j]); // lê o número do aluno                    
                    break;
                case 1:
                    printf("Digite a altura do aluno %d: ", i + 1);
                    scanf("%f", &alunos[i][j]); // lê a altura do aluno
                    break;
                default:
                    break;
            }
        }
    }

    // encontra o mais alto e o mais baixo  
    int mais__alto = 0, mais_baixo = 0;
    for (int i = 0; i < TAM; i++) { 
        if (alunos[i][1] > alunos[mais__alto][1]) {
            mais__alto = i;
        }
        if (alunos[i][1] < alunos[mais_baixo][1]) {
            mais_baixo = i;
        }
    }

    // mostra os resultados
    printf("Maior altura: %.2f metros ( aluno %.0f)\n", alunos[mais__alto][1], alunos[mais__alto][0]);
    printf("Menor altura: %.2f metros ( aluno %.0f)  ", alunos[mais_baixo][1], alunos[mais_baixo][0]);

    return 0;
}