/*
    Escreva um programa que conta e exibe a quantidade de vezes
    que cada vogal ocorre em uma frase fornecida pelo usuário.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char frase[100] = "az";
    char vogais[6] = "aeiou";
    int contador[5] = { 0 };

    printf("Escreva uma frase:\n");
    fgets(frase, sizeof(frase), stdin);

    printf("\n\t%d\n", strlen(frase));

    for (int f = 0; f < strlen(frase); f++) {
        for (int v = 0; v < 5; v++) {
            if (tolower(frase[f]) == vogais[v])
                ++contador[v];
        }
    }

    for (int z = 0; z < 5; z++) {
        printf("\n'%c' tem %d", vogais[z], contador[z]);
    }

    return 0;
}