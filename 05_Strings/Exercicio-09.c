/*
    Crie uma função que mostra os caracteres de uma string que são repetidos.
*/

#include <stdio.h>
#include <string.h>

int existe(char c, char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) return 1;
    }
    return 0;
}

void letrasRepetidas(char str[], char repetidos[]) {
    int i = 0, j = 0, r = 0;

    // encontra as letras repetidas
    while (str[i]) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (existe(str[i], repetidos)) break;

            if (str[i] == str[j]) {
                repetidos[r++] = str[i];
                printf("Caractere repetido: %c\n", str[i]);
                break;
            }
        }
        i++;
    }
}

int main()
{
    char nome[64] = "campo gravitacional ";
    char repetidos[64] = { 0 };

    letrasRepetidas(nome, repetidos);
    return 0;
}