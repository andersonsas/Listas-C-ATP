/*
    Crie uma função que recebe uma string e um caractere, e
    apague todas as ocorrências desses caractere na string.
*/

#include <stdio.h>

void removeChar(char[], char);

int main()
{
    char nome[16] = "exemplo";
    char letra = 'a';

    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Letra: ");
    scanf(" %c", &letra);

    printf("antes: %s\n", nome);
    removeChar(nome, letra);
    printf("depois: %s", nome);

    return 0;
}

void removeChar(char str[], char c) {
    int i, j = 0;

    while (str[i]) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
        ++i;
    }
    str[j] = '\0';
}