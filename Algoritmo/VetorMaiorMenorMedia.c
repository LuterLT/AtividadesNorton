/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numer[10], maior= -99999, menor= 99999, i;
    float media = 0;
    
    for (i = 0; i < 10; i++)
    {
        printf("Digite o número: ");
        scanf("%i", &numer[i]);
        
        if(numer[i] > maior)
        {
            maior = numer[i];
        }
        if(numer[i] < menor)
        {
            menor = numer[i];
        }
        media += numer[i];
    }
    media = media/10;
    printf("\nO maior é: %i", maior);
    printf("\nO menor é: %i", menor);
    printf("\nA média é: %.2f", media);
}