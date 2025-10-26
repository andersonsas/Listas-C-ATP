/*
    Crie uma função que retira todas os caracteres repetidos de uma string.
*/

#include <stdio.h>
#include <string.h>

int existe(char c, char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) return 1;
    }
    return 0;
}

void removeChar(char str[], char c) {
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
        ++i;
    }
    str[j] = '\0';
}

void letrasRepetidas(char str[], char repetidos[]) {
    int i = 0, j = 0, r = 0;
    while (str[i]) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (existe(str[i], repetidos)) break;
            if (str[i] == str[j]) {
                repetidos[r++] = str[i];
                break;
            }
        }
        i++;
    }
}

void removerletrasRepetidas(char str[], char rep[]) {
    letrasRepetidas(str, rep);
    for (int i = 0; rep[i] != '\0'; i++) {
        removeChar(str, rep[i]);
    }
}

int main()
{
    char palavra[] = "feliz dia natalina";
    char repetidos[64] = { 0 };

    printf("==>%s", palavra);
    removerletrasRepetidas(palavra, repetidos);
    printf("\n==>%s", palavra);

    return 0;
}