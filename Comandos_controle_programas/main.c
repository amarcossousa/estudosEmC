// Programa de números mágicos #1. 

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
    int magic; /* número mágico*/
    int guess; /*palpite do usuário*/

    magic = rand(); /*gera o número mágico*/

    printf("adivinhe o número mágico: ");
    scanf("%d", &guess);

    if(guess == magic) printf(" ** Certo **");
    else printf("Errado. O numero correto é: %d", &magic);

}

