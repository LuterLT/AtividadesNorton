/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int contador = 0, numero, multi2 = 0, multi3 = 0;

    do {
        printf("Digite um numero (%i/10): ", contador + 1);
        scanf("%i", &numero);

        if (numero % 2 == 0) {
            multi2++;
        }
        if (numero % 3 == 0) {
            multi3++;
        }

        contador++;
    } while (contador < 10);

    printf("\nForam digitados %i numeros multiplos de 2.\n", multi2);
    printf("Foram digitados %i numeros multiplos de 3.\n", multi3);
    

}
