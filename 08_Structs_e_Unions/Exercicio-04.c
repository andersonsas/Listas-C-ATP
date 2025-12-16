/*
    Considerando a estrutura:
        struct Vetor{
            float x;
            float y;
            float z;
        };
    para representar um vetor no R3, implemente um programa que calcule a soma de dois vetores.
*/

#include <stdio.h>

struct vetor
{
    float x, y, z;
};

struct vetor somaVetores(struct vetor *, struct vetor *);

int main()
{
    struct vetor v1 = { 2.6, 3.9, 5.4 };
    struct vetor v2 = { 4.2,-2.9, 1.1 };
    struct vetor resultado = { 0, 0, 0 };

    resultado = somaVetores(&v1, &v2);

    printf("Vetor Soma: (%.2f, %.2f, %.2f)\n", resultado.x, resultado.y, resultado.z);

    return 0;
}

struct vetor somaVetores(struct vetor *v1, struct vetor *v2) {
    struct vetor vS = { 0, 0, 0 };

    vS.x = v1->x + v2->x;
    vS.y = v1->y + v2->y;
    vS.z = v1->z + v2->z;

    return vS;
}