/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade;
    printf("Informe a idade do nadador: ");
    scanf("%i", &idade);

    if(idade>=18)
    {   printf("Nadador Adulto");}
    else
    {
        if(idade>=14)
        {   printf("Nadador Juvenil B");}
        else
        {
            if(idade>=12)
            {   printf("Nadador Juvenil A");}
            else
            {   
               if(idade>=8)
               {    printf("Nadador Infantil B");}
               else
               {    printf("Nadador Infantil A");}
            }
        }
    }

    return 0;
}
