/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero, i;

    printf("Digite a tabuada desejada: ");
    scanf("%i", &numero);

    printf("Tabuada do %i:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%i x %i = %i\n", numero, i, numero * i);
    }

}
