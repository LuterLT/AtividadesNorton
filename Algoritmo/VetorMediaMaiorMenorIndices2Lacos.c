/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    float media=0, indices[24], maior=-99999, menor=99999;
    for (i = 0; i < 24; i++)
    {
        printf("Digite o %iº indice : ", i + 1);
        scanf("%f", &indices[i]);
        
    }
    for (i=0; i<24; i++)
    {
        if(indices[i]>maior){maior = indices[i];}
        if(indices[i]<menor){menor = indices[i];}
        media += indices[i]; 
        
    }
    
    media = media/24;
    printf("\n\n A média é: %.2f ", media);
    printf("\nO maior foi: %.2f", maior);
    printf("\nO menor foi: %.2f", menor);
}
