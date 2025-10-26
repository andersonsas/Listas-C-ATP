/*
    Escreva um programa que calcule e escreva a quantidade de
    letras maiúsculas de uma frase fornecida pelo usuário.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char frase[100];
    unsigned int s = 0;

    printf("Escreva uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (isupper(frase[i])) s++;
    }

    printf("A frase contém %u letras maiúsculas", s);
    return 0;
}