/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float valorgasolina, valoralcool;
    printf("informe o preço da gasolina por litro:");
    scanf ("%f", &valorgasolina);
    printf("informe o preço do álcool por litro:");
    scanf ("%f", &valoralcool);
    
    
    if(valorgasolina*0.7 < valoralcool)
    {
        printf("Utilizar gasolina é mais vantajoso");
        return 0;
    }
    else
    {
        printf("Utilizar álcool é mais vantajoso");
        return 0;
    }
    
    return 0;
}