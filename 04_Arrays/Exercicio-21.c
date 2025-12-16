/*
    Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes
    deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm no máximo 20 elementos.
    Imprimir todos os conjuntos.
*/

#include <stdio.h>
#define TAM 20

// Função para imprimir um vetor
void imprimeVetor(float vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
}

int main()
{
    float vetor[TAM], quadrado[TAM];

    for (int i = 0; i < TAM; i++) {
        printf("Digite o %dº valor do vetor: ", i + 1);
        scanf("%f", &vetor[i]);
        quadrado[i] = vetor[i] * vetor[i]; // Calculando o quadrado
    }

    // Imprimindo os vetores e os quadrados
    printf("\nVetor original: ");
    imprimeVetor(vetor, TAM);

    printf("\nVetor dos quadrados: ");
    imprimeVetor(quadrado, TAM);

    return 0;
}