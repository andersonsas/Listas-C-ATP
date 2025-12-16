/*
    Considerando a estrutura:
        struct Ponto{
            int x;
            int y;
        };
    para representar um ponto em uma grade 2D, implemente um programa que indique se
    um ponto p esta localizado dentro ou fora de um retângulo. O retângulo e definido por
    seus vertices inferior esquerdo v1 e superior direito v2. A função deve imprimir caso o
    ponto esteja localizado dentro do retângulo ou não.
*/

#include <stdio.h>

struct Ponto {
    int x;
    int y;
};

void verificarPontoNoRetangulo(struct Ponto *p, int v1[2], int v2[2]) {
    if (p->x >= v1[0] && p->x <= v2[0] && p->y >= v1[1] && p->y <= v2[1]) {
        printf("O ponto (%d, %d) está dentro do retângulo.\n", p->x, p->y);
    } else {
        printf("O ponto (%d, %d) está fora do retângulo.\n", p->x, p->y);
    }
}

int main()
{
    int v1[2] = { 0, 0 }; // Vertice inferior esquerdo
    int v2[2] = { 10, 10 }; // Vertice superior direito
    struct Ponto p = { 9, 12 };

    verificarPontoNoRetangulo(&p, v1, v2);
    return 0;
}