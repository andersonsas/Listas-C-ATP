/*
    Qual a diferença entre "A" e 'A'?
*/

#include <stdio.h>

int main() {
    char letra = 'A';
    char palavra[] = "A";

    printf("%c", letra); // imprime A
    printf("%s", palavra); // imprime A

    /*  'A' representa um único caractere.
        "A" representa uma cadeia de caractere com duas posições,
            uma é caractere 'A' e um caractere nulo '\0'.
    */
}