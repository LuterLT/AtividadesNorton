/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numero;
    printf("informe o valor que deseja saber se é par ou impar:");
    scanf ("%i", &numero);
    
    if(numero%2 > 0)
    {
        printf("O número digitado é Impar");
        return 0;
    }
    else
    {
        printf("O número digitado é Par");
        return 0;
    }
    
    return 0;
}