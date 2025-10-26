/*
    Exibir na tela os caracteres da tabela de códigos ASCII
    (American Standard Code for Information Interchange).
*/

#include <stdio.h>

int main() {
    printf("Código ASCII e seus caracteres:\n\n");

    for (int i = 0; i < 128; i++) {
        printf("Código %3d: ", i);

        // Alguns códigos são não imprimíveis
        if (i < 32 || i == 127) {
            printf("Não imprimível\n");
        } else {
            printf("%c\n", i);
        }
    }

    return 0;
}
