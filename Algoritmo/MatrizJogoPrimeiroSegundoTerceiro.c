/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int tabela[10][4], i, primeiro=-1, segundo=-1, terceiro=-1, vitoria=0, empate=1, derrota=2, total=3;
    for(i=0;i<5;i++)
    {
        printf("Digite as vitórias: ");
        scanf("%i", &tabela[i][vitoria]);
        tabela[i][vitoria]*=3;
        printf("Digite os empates: ");
        scanf("%i", &tabela[i][empate]);
        tabela[i][empate]*=1;
        printf("Digite as derrotas: ");
        scanf("%i", &tabela[i][derrota]);
        tabela[i][derrota]*=0;
        
        tabela[i][total] = tabela[i][vitoria]+ tabela[i][empate]+ tabela[i][derrota];
        
    }
    for(i=0;i<5;i++)
    {
        if(tabela[i][total] >= primeiro)
        {
            terceiro = segundo;
            segundo = primeiro;
            primeiro = tabela[i][total];
        }
        else
        {
            if(tabela[i][total] >= segundo)
            {
                terceiro = segundo;
                segundo = tabela[i][total];
            }
            else
            {
                if(tabela[i][total]>= terceiro){terceiro=tabela[i][total];}
            }
        }
    }
    printf("\n\nO primeiro lugar foi para:%i; segundo:%i; terceiro%i;", primeiro, segundo, terceiro);
}