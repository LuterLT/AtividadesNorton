/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float veloMax, veloCarro, ultrapassado;
    printf("Diga a Velo máxima da pista e a Velo do Carro:     ");
    scanf("%f %f", &veloMax, &veloCarro);
    ultrapassado = veloCarro - veloMax;
    

    if(ultrapassado>=31)
    {   printf("Multa de 200 Reais. Ultrapassado: %.2f", ultrapassado);}
    else
    {
        if(ultrapassado>=11)
        {   printf("Multa de 100 Reais. Ultrapassado: %.2f", ultrapassado);}
        else
        {
            if(ultrapassado>=1)
            {   printf("Multa 50 reais. Ultrapassado: %.2f", ultrapassado);}
            else
            {   
                printf("Parabens vc não foi multado. Ultrapassado: %.2f", ultrapassado);
            }
        }
    }

    return 0;
}
