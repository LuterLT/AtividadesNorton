/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float pUm, pDois, pTres, faltasAluno, percenFaltas, nota;
    
    printf("Digite a nota da P1: ");
    scanf("%f", &pUm);
    printf("Digite a nota da P2: ");
    scanf("%f", &pDois);
    printf("Digite a quantidade de faltas do Aluno: ");
    scanf("%f", &faltasAluno);
    
    nota = (pUm + pDois)/2;
    percenFaltas = (faltasAluno * 100)/20;
    
    if (percenFaltas > 30)
    {
        printf("Aluno reprovado por número excedente de faltas. :( ");
    }
    else
    {
        if (nota >= 6)
        {
            printf("Aluno aprovado. Parabéns nota: %.2f!\n", nota);
        }
        else
        {
            printf("Nota insuficiente para passar. Informe a nota da p3 para recalcularmos: ");
            scanf("%f", &pTres);
            if (pUm == pDois) /*Eu não coloquei essa parte no FLuxograma para não ficar tão grande*/
            {   pDois = pTres;}
            else
            {
                if(pUm > pDois)
                {   pDois = pTres;}
                else
                {   pUm = pTres;}
            }
            nota = (pUm + pDois)/2;
            
            
            if (nota >= 6)
            {
            printf("Aluno aprovado depois da P3. Parabéns nota: %.2f!\n", nota);
            }
            else
            {
            printf("Aluno reprovado. Boa sorte na próxima :( ");  
            }
            
        }
    }

    return 0;
}
