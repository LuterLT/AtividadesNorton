/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float valorUm, valorDois;
    int operacao;
    
    printf("Informe os dois valores para realizar uma operação: ");
    scanf("%f %f", &valorUm, &valorDois);
    printf("Digite o numero respectivo a operação que deseja realizar...");
    printf("1-Soma; 2-Subtração; 3-Multiplicação; 4-Divisão: ");
    scanf("%i", &operacao);
    
    if (operacao==1)
    {printf("Realizando soma: %2.f", valorUm + valorDois);}
    else
    {
        if(operacao==2)
        {printf("Realizando subtração: %2.f", valorUm - valorDois);}
        else
        {
            if(operacao==3)
            {printf("Realizando multiplicação: %2.f", valorUm * valorDois);}
            else
            {printf("Realizando divisão: %2.f", valorUm / valorDois);}
        }
    }

    return 0;
}
