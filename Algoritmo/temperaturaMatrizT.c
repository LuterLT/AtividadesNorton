/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float temperatura[10][3], media = 0, varia=0, maiorVaria=-99999;
    int temMedi = 2, temMin = 0, temMax = 1, i, digi = -1;
    
    for (i = 0; i < 10; i++)
    {
        printf("Digite a temp Minima do %iº dia: ", i+1);
        scanf("%f", &temperatura[i][temMin]);
        printf("Digite a temp Max do %iº dia: ", i+1);
        scanf("%f", &temperatura[i][temMax]);
        
        media = (temperatura[i][temMin] + temperatura[i][temMax])/2;
        temperatura[i][temMedi] = media;
        varia = temperatura[i][temMax] - temperatura[i][temMin];
        
        if(varia>maiorVaria){maiorVaria = varia;}
        
    }
    printf("\nDigite: 0-Sair, 1-Ver temp minimas, 2-Ver temp max, 3-Ver Maior Variação\n");
    while (digi!=0)
    {
        printf("\nQuer fazer oq: ");
        scanf("%i", &digi);
        switch(digi){
            case 0:
                digi = 0;
                break;
            case 1:
                for (i = 0; i < 10; i++){
                    printf("\nA temp minima do %iº: %.2f;", i+1, temperatura[i][temMin]);
                }
                break;
            case 2:
                for (i = 0; i < 10; i++){
                    printf("\nA temp maxima do %iº: %.2f;", i+1, temperatura[i][temMax]);
                }
                break;
            case 3:
                for(i=0;i<10;i++)
                {
                    varia = temperatura[i][temMax] - temperatura[i][temMin];
                    if(varia == maiorVaria)
                    {
                        printf("\nEis a maior variação de todos os dias: %.2f do dia %i;", maiorVaria, i+1);
                    }
                }
                break;
            default:
                printf("Vc digitou um valor incompativel de ação");
                digi = 0;
                break;
        }
    }
}