/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float indice;
    printf("Informe o indice de poluição: ");
    scanf("%f", &indice);

    if(indice>=0.5)
    {   printf("As atividades das três industrias estão suspensas");}
    else
    {
        if(indice>=0.4)
        {   printf("As atividades do grupo 1 e 2 estão suspensos");}
        else
        {
            if(indice>=0.3)
            {   printf("As atividades do grupo 1 estão suspensas");}
            else
            {   printf("Os indices estão aceitaveis de acordo com a norma");}
        }
    }

    return 0;
}
