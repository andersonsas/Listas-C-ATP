/*
    Escreva um trecho de código em “C” para fazer a criação
    dos novos tipos de dados conforme solicitado abaixo:
    Horário: composto de hora, minutos e segundos.
    Data: composto de dia, mês e ano.
    Compromisso: composto de uma data, horário e texto que descreve o compromisso.
    Byte: usado para armazenar 8 bits (definido em função dos tipos básicos do ”C”)
*/

#include <stdio.h>
#include <stdint.h> // Para usar uint8_t

// Tipo para representar um horário
typedef struct {
    int hora;
    int minuto;
    int segundo;
} Horario;

// Tipo para representar uma data
typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

// Tipo para representar um compromisso
typedef struct {
    Data data;
    Horario horario;
    char descricao[100];
} Compromisso;

// Tipo para representar um byte (8 bits)
typedef uint8_t Byte;