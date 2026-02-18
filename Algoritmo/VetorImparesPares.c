/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numeros[20];
    int i, digitado = 0, impares = 0, pares = 0;
    for (i = 0; i < 20; i++)
    {
        printf("Digite o %iº número : ", i + 1);
        scanf("%i", &digitado);
        numeros[i] = digitado;
        if(digitado%2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
     
        
    }
    //printf("\nAqui %i: ", numeros[i]);
    printf("\n Porcentagem de Pares: %.2f%%", ((float)pares/i)*100);
    printf("\n Porcentagem de Impares %.2f%%", ((float)impares/i)*100);
}
