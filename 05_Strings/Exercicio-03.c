/*
    Qual a diferença entre "mno" e "m\no"?  Qual a diferença entre "MNOP" e "MN0P"?
*/

#include <stdio.h>

int main()
{    
    /* Uma string comum com os caracteres m, n, o. */
    printf("mno");

    /* Uma string com m, seguido de quebra de linha (\n), seguido de o.*/
    printf("m\no");

    /* String com os caracteres M, N, O, P */
    printf("MNOP");

    /* String com os caracteres M, N, zero ('0'), P.*/
    printf("MN0P");  

    return 0;
}