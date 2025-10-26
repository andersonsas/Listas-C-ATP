/*
    Declarar uma variável do tipo string e a seguir atribuir os caracteres
    numéricos as primeiras dez posições da variável.
*/

#include <stdio.h>

int main()
{
    // variável
    char texto[32] = { 0 };

    //processamento
    for (int i = 0; i < 10; i++) {
        texto[i] = '0' + i;
    }

    printf("%s", texto);

    return 0;
}