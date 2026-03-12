#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct contaBancaria{
    float saldo;
    int cpf;
    char nome[100];
}; 
typedef struct contaBancaria ContaBancaria;

void mostrarSaldo(ContaBancaria *conta){
    printf("\nO saldo de %s é: %0.2f", conta->nome, conta->saldo);
}
void depositar(ContaBancaria *conta, float deposito){
    conta->saldo += deposito;
}
void sacar(ContaBancaria *conta, float saque){
    conta->saldo -= saque;
}

ContaBancaria* criarConta(float saldo, int cpf, char nome[]){
    ContaBancaria *conta1;
    conta1 = malloc(sizeof(ContaBancaria));
    conta1->saldo = saldo;
    conta1->cpf = cpf;
    strcpy(conta1->nome, nome);
    return conta1;
    
}

int main()
{
    ContaBancaria pessoa1;
    ContaBancaria* pessoa2;
    strcpy(pessoa1.nome, "Pedro Alvarez Cabral");
    pessoa1.saldo = 1000.0;
    
    sacar(&pessoa1, 300.0);
    depositar(&pessoa1, 200.0);
    mostrarSaldo(&pessoa1);
    
    pessoa2 = criarConta(2500.0, 347834, "Princesa Isabel");
    mostrarSaldo(pessoa2);
    return 0;
}