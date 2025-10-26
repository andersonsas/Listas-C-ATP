/*
    Crie uma função que transforma todos os caracteres de uma strings em minúsculos.
*/

#include <stdio.h>

void paraMinusculo(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        // Se estiver entre 'A' e 'Z', converte para minúsculo
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
}

int main() {
    char texto[64];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    paraMinusculo(texto);
    
    printf("Strings em minúscula:%s", texto);

    return 0;
}