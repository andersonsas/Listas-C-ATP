/*
    Construa uma declaração de struct em C que possa acomodar
    dados provenientes de uma tabela conforme o exemplo a seguir:
*/

#include <stdio.h>

struct Ficha
{
    char nome[50];
    char rua;
    int numero;
    char bairro[100];
    char complemento[50];
    int cep;
    char cidade[50];
    char UF[3];
    int telefone1;
    int telefone2;
    int telefone3;
};