#include <stdio.h>

static int series_num;
void series_start(int seed);
int series(void);
series(void)
{
    series_num = series_num+23;
    return series_num;
}

/*Inicializa series_num*/
void series_start(int seed)
{
    series_num = seed;
}

series(void)
{
    static int series_num;

    series_num = series_num+23;
    return (series_num);
}

series(void)
{
    static int series_num = 100;

    series_num = series_num+23;
    return series_num;
}