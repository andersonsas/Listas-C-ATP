/*
    Crie uma função que transforma todos os caracteres de uma string em maiúsculos.
*/

#include <stdio.h>

void paraMaiusculas(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        // Se estiver entre 'a' e 'z', converte para maiúsculo        
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // ou: str[i] -= 32;
        }
    }
}

int main() {
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    paraMaiusculas(texto);

    printf("String em maiúsculas: %s", texto);

    return 0;
}