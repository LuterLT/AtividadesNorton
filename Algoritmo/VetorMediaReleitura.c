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
    int i, digitado = 0, maior = -99999999, menor = 999999999, count= 0;
    float media;
    for (i = 0; i < 20; i++)
    {
        printf("Digite o %iº número : ", i + 1);
        scanf("%i", &digitado);
        numeros[i] = digitado;
        count++;
        
    }
    for (i=0; i<20; i++)
    {
        digitado = numeros[i];
        if(digitado>maior){maior = digitado;}
        if(digitado<menor){menor = digitado;}
        media += digitado; 
        
    }
    
    media = media/count;
    printf("\n\n A média é %.2f: ", media);
}
