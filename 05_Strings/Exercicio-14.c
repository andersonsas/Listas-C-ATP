/*
    Escreva um programa que calcule e escreva a quantidade de vezes que
    a letra 'a' aparece em uma frase fornecida pelo usuário.
*/

#include <stdio.h>

int contar_letra(char str[], char c) {
    int contador = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            contador++;
        }
    }
    return contador;
}

int main()
{
    char frase[100];
    int ocorrencia = 0;

    // entrada
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //processando
    ocorrencia = contar_letra(frase, 'a');

    // relatório
    printf("A letra 'a' apareceu %d vezes na frase.", ocorrencia);

    return 0;
}