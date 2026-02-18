/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float saldo, saque, deposito;
    int escolha;
    saldo = 3000.00;
    saque = 0;
    deposito = 0;
    
    printf("Escolhe qual operação deseja fazer em seu banco. \n1-Ver Saldo;\n2-Fazer Saque;\n3-Fazer Depósito.\nDigite a ação desejada:  ");
    scanf("%i", &escolha); 
    
    switch (escolha){
        case 1:
            printf("\nO seu saldo é:\n R$ %.2f", saldo);
            break;
        case 2:
            printf("\nDigite o valor que deseja sacar:  ");
            scanf("%f", &saque);
            if (saque <= saldo)
            {
                saldo = saldo - saque;
                printf("\nVocê sacou R$ %.2f", saque);
                printf("\nO seu saldo atual é:\n R$ %.2f", saldo);
            }
            else{ printf("\nSeu saldo é insuficiente para a transação");}
            
            break;
        case 3:
            printf("\nDigite o valor que deseja depositar:  ");
            scanf("%f", &deposito);
            saldo = saldo + deposito;
            printf("\nO seu saldo atual é:\n R$ %.2f", saldo);
            
            break;
        default:
            break;
    }

    return 0;
}