/*
    Declarar uma variável do tipo string e a seguir atribuir as letras
    maiúsculas do alfabeto as primeiras vinte e seis posições da variável.
*/

#include <stdio.h>
#include <ctype.h>

#define top 26

int main()
{
    // variável
    char texto[32] = { 0 };

    // processamento
    for (int i = 0; i < top; i++) {
        texto[i] = 'A' + i;
    }

    printf("%s", texto);

    return 0;
}