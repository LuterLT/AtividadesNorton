/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float distancia, milha, conversao;
    milha = 1.60934;
    printf("informe a Distacia que deseja converter:");
    scanf ("%f", &distancia);
    
    conversao = distancia*milha;
    printf("O resultado em Milhas é %.2f", conversao);
    
    
    return 0;
}