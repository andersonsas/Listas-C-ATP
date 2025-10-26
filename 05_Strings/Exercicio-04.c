/*
    Qual a diferença entre "MN\0P" e "MN0P"?
*/

#include <stdio.h>

int main()
{
    /* Uma simples string que imprime as letras e o zero*/
    char s1[] = "MN0P";
    printf("%s", s1);

    /* Strings contendo caractere nulo*/
    printf("\n");
    char s2[] = "MN\0P";
    printf("%s", s2);

    /*
        A diferença é no caractere nulo que define o fim da string,
        qualquer caractere após '\0' não será exibido.
    */

    return 0;
}