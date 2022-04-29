#include <stdio.h>

int main()
{
    printf("Hello, world!");
}

// void func1(void)
// {
//     int x;
//     x = 10;
// }

// void func2(void)
// {
//     int x;
//     x = -199;
// }


// void f(void)
// {
//     int t;

//     scanf("%d", &t);

//     if(t == 1) {
//         char s[80]; /*isto é criado apenas
//                      na entrada deste bloco*/
//     printf("entre com o nome: ");
//     gets(s);
//     // Faz alguma coisa ...    
//     }
// }

// // // Esta função está errada.
// // void f(void)
// // {
// //     int i;

// //     i = 10;

// //     int j; /* esta linha irá provocar um erro */

// //     j = 20;
// // }
// // // Versões sintaticamente corretas
// // /*Define j dentro de seu própri bloco de codigo. */
// void f(void)
// {
//     int i;
//     i = 10;
//     { /* define j em seu próprio bloco de código */
//         int j;

//         j = 20;
//     }
// }
// // Define j no início d bloco da função
// void f(void)
// {
//     int i;
//     int j;

//     i = 10;
//     j = 20;
// }