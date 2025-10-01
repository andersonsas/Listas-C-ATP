/*
    Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
*/

#include <stdio.h>

int main()
{
    // variáveis
    int vetor[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int contador_par = 0;

    // lê vetor    
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2) contador_par++;
    }

    // exibe 
    printf("vetor tem %d números pares", contador_par);

    return 0;
}