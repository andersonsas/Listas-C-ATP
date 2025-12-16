/*
    Faça um programa que leia dois números n e m e:
    •   Crie e leia um vetor de inteiros de n posições;
    •   Crie e leia um vetor de inteiros de m posições;
    •   Crie e construa um vetor de inteiros que seja a união entre os dois vetores anteriores,
        ou seja, que contém os elementos dos dois vetores (inclusive repetidos).

    Na sua função main(), imprima os três vetores criados.
*/

#include <stdio.h>
#define imprimir(v, t) _imprimirVetor(#v, v, t) // macro

void ler(int[], int);
void _imprimirVetor(const char*, int[], int);
int unir(int[], int, int[], int, int[]);

int main()
{
    // declarando variáveis
    int n[1], m[1];

    // entrada de dados
    printf("Informe o tamanho do primeiro vetor\n");
    ler(n, 1);

    printf("Informe o tamanho do segundo vetor\n");
    ler(m, 1);

    // criando vetores
    int vetor1[n[0]], vetor2[m[0]];
    printf("Digite os números para o vetor 1 (tamanho: %d)\n", n[0]);
    ler(vetor1, n[0]);
    printf("Digite os números para o vetor 2 (tamanho: %d)\n", m[0]);
    ler(vetor2, m[0]);

    // criando variável
    int vetorU[n[0] + m[0]];

    // une os dois vetores e sai o tamanho da união
    int uT = unir(vetor1, n[0], vetor2, m[0], vetorU);

    printf("\n");
    // imprime os vetores    
    imprimir(vetor1, n[0]);
    imprimir(vetor2, m[0]);    
    imprimir(vetorU, uT);

    return 0;
}



void ler(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Posição %d°: ", i);
        scanf("%d", &vetor[i]);
    }
}

void _imprimirVetor(const char* nome, int vetor[], int tamanho) {
    printf("%s = {", nome);
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("}\n");
}

int unir(int v1[], int t1, int v2[], int t2, int u[]) {
    int k = 0;
    for (int i = 0; i < (t1 + t2); i++) {
        if (i < t1) {
            u[i] = v1[i];
        } else {
            u[i] = v2[i - t1];
        }
        k++;
    }
    return k;
}