/*
    Escreva um programa que conta e exibe, separadamente, a quantidade de caracteres
    alfabéticos e de dígitos numéricos existentes em uma frase fornecida pelo usuário.
*/

#include <stdio.h>
#include <ctype.h>

int qletra(char[]);
int qNumero(char[]);

int anyDigit(char*);

int main()
{
    char frase[100];
    int numeros, letras;

    printf("Escreva uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    numeros = qNumero(frase);
    letras = qletra(frase);
    printf("A frase contém %d letras e %d números", letras, numeros);

    
    anyDigit(frase);
    return 0;
}

int qletra(char str[]) {
    int k = 0; // contador
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) k++;
    }
    return k;
}

int qNumero(char str[]) {
    int k = 0; // contador
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) k++;
    }
    return k;
}

int anyDigit(char* s) {
    while (*s) {
        if (isdigit(*s)) {
            printf("\nA frase contém pelo menos um dígito.\n");
            return 1;
        }
        s++;
    }
    printf("\nA frase não contém dígitos.\n");
    return 0;
}