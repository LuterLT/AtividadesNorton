/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numeroRecebido = -1, media= 0, quant = 0;
    float result = 0;
    printf("Digite quantos números inteiros desejar. Quando quiser parar digite 0");
    
    while (numeroRecebido != 0){
        printf("\n Digite o número: ");
        scanf("%i", &numeroRecebido);
        if (numeroRecebido != 0)
        {
            quant = quant + 1;
            media = media + numeroRecebido;
        }
        
    }
    result = media / quant;
    printf("\nA média é: %.2f ", result);
    

}
