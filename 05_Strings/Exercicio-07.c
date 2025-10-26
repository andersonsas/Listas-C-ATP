/*
    Crie uma função que receba uma string e um caractere, e
    retorne o número de vezes que esse caractere aparece na string.
*/

#include <stdio.h>

int contar_letra(char[], char); // protótipo

int main()
{
    // variáveis
    char texto[32], letra;

    // entradas
    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    getchar();

    // chamadas
    int k = contar_letra(texto, letra);

    // saída
    printf("A letra \"%c\" apareceu %d vezes", letra, k);
    return 0;
}

// função
int contar_letra(char str[], char c) {
    int contador = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            contador++;
        }
    }
    return contador;
}