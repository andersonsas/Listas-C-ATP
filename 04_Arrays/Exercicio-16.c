/*
    Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor.
    Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso o usuário
    digite um número que já foi digitado anteriormente, o programa deverá pedir para ele digitar outro
    número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele
    existe entre os números que já foram fornecidos. Exibir na tela o vetor final que foi digitado.
*/

#include <stdio.h>

int main()
{
    int historico[10], entrada;
    int indice = 0, existe = 0;

    do {
        // le a entrada
        printf("Digite um número inteiro [%d]: ", indice + 1);
        scanf("%d", &entrada);

        // rastreia número repetido no historico
        for (int i = 0; i < indice + 1; i++) {
            if (entrada == historico[i]) {
                printf("O já foi digitado. Digite outro.\n");
                existe = 1; // se existir
                break; // sai do FOR para dá continue no Laço Do-While
            }
        }
        if (existe) { existe = 0; continue; } // volta para inicio caso exista valor repetido

        historico[indice] = entrada;
        indice++;
    } while (indice < 10);

    return 0;
}