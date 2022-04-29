/*Maneira correta de manter o codigo dentro da função sem alteração*/
#include <stdio.h>

void sp_to_dash(const char *str);

void main(void)
{
    sp_to_dash("isso é um teste");
}

void sp_to_dash(const char *str)
{
    while(*str) {
        if(*str == ' ') printf("%c", '-');
        else printf("%c", *str);
        str++;
        
    }
}

// /*Maneira incorreta, alterando o codigo dentro da função*/
// /*isso está errado*/
// void sp_to_dash(const char *str)
// {
//     while(*str) {
//         if(*str==' ') *str = '-'; /*não faça isto*/
//         printf("%c", *str);
//         str++;
//     }    
// }

