#include <stdio.h>
#include"iniVar.h"

void f(void);

void main(void)
{
    int i;

    for (i=0; i<10; i++) f();
}

void f(void)
{
    int j = 10;

    printf("%d", j);

    j++; /* esta linha não tem nenhum efeito*/
}
