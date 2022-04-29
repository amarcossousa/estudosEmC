/*Paremtros formais*/
/*Retorna 1 se c é parte da string s; 0 se não é o caso */
#include <stdio.h>

is_in(char *s, char c)
{
    while (*s)
        if (*s ==c) return 1;
        else s++;
        
    return 0;
}