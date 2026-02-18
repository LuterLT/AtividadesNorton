/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int ordemCerta[10], ordemInversa[10], i, j;
    
    for (i=0; i<10; i++)
    {
        printf("Digite os numeros: ");
        scanf("%i", &ordemCerta[i]);
        
    }
    for (j=9; j>-1; j--)
    {
        ordemInversa[j] = ordemCerta[9-j];
        printf("\nVetorInver[%i]: %i", j, ordemInversa[j]);
    }
}