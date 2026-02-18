/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float distancia, consumo, combustivel, tempo, velocidade;
    printf("informe valor para Distacia:");
    scanf ("%f", &distancia);
    printf("informe valor para Consumo de Litros por Km:");
    scanf ("%f", &consumo);
    printf("informe valor para Velocidade:");
    scanf ("%f", &velocidade);
    
    combustivel = distancia/consumo;
    
    tempo = distancia/velocidade;  
        
    printf("O combustivel necessario é:%.2f litros", combustivel);
    printf(" O Tempo de viagem sera de:%.2f horas", tempo);
    
    
    
    return 0;
}