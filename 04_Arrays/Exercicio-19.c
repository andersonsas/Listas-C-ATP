/*
    Ler dois conjuntos de números reais, armazenando-os em vetores e calcular o produto escalar entre eles.
    Os conjuntos têm no máximo 20 elementos. Imprimir os dois conjuntos e o produto escalar, sendo que o
    produto escalar é dado por: x1 * y1 + x2 * y2 + ::: +xn * yn.
*/

#include <stdio.h>
#define TAM 20

int main()
{
    // Declaração dos vetores e variáveis
    float conjunto1[TAM], conjunto2[TAM];
    float produto_escalar = 0;

    for (int i = 0; i < TAM; i++) {
        printf("Digite o %dº valor do primeiro conjunto: ", i + 1);
        scanf("%f", &conjunto1[i]);
    }

    for (int i = 0; i < TAM; i++) {
        printf("Digite o %dº valor do segundo conjunto: ", i + 1);
        scanf("%f", &conjunto2[i]);
    }

    // Calculando o produto escalar
    for (int i = 0; i < TAM; i++) {
        produto_escalar += conjunto1[i] * conjunto2[i];
    }

    // Imprimindo os conjuntos
    printf("\nPrimeiro conjunto: ");
    for (int i = 0; i < TAM; i++) {
        printf("%.2f ", conjunto1[i]);
    }
    printf("\nSegundo conjunto: ");
    for (int i = 0; i < TAM; i++) {
        printf("%.2f ", conjunto2[i]);
    }
    printf("\nProduto escalar: %.2f\n", produto_escalar);


    return 0;
}