==**1-O que e um Tipo Abstrato de Dados (TAD) e qual a característica fundamental na sua**==  
==**utilização?**==  Um Tipo Abstrato de Dados (TAD) é basicamente uma forma de organizar dados onde a gente define quais valores ele pode guardar e o que dá pra fazer com esses valores, mas sem se preocupar como isso funciona por baixo dos panos.

O mais importante quando a gente usa um TAD é a abstração, que significa separar o que o programa pode fazer (as operações) de como essas coisas são feitas internamente. Isso permite que a gente utilize o tipo de dado sem precisar saber como ele foi construído ou como as operações funcionam de verdade.

==**2- Quais as vantagens de se programar com TADs?**==  
As principais vantagens de usar Tipos Abstratos de Dados incluem:
-Encapsulamento: os detalhes de implementação ficam escondidos, e o acesso aos dados só acontece através das operações definidas na interface.
-Modularidade: o sistema pode ser dividido em partes independentes, o que organiza melhor o código.
-Reutilização: um mesmo TAD pode ser aproveitado em diferentes projetos sem precisar ser reescrito.
-Facilidade de manutenção: quem usa o TAD não precisa se preocupar com mudanças internas, enquanto a interface não mudar, o código que o utiliza continua funcionando normalmente.

==**3- Crie um TAD que implemente o controle de uma conta bancaria, implemente funções para inicializar, deposito, sacar e imprimir o saldo.**==
```
#include <stdio.h>
#include <string.h>

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

int main()
{
    ContaBancaria pessoa1;
    strcpy(pessoa1.nome, "Pedro Alvarez Cabral");
    pessoa1.saldo = 1000.0;
    
    sacar(&pessoa1, 300.0);
    depositar(&pessoa1, 200.0);
    mostrarSaldo(&pessoa1);
    
    return 0;
}
```

==**4-Utilizando a alocação dinâmica de memoria crie uma função para criar uma nova conta bancaria**==
```
ContaBancaria* criarConta(float saldo, int cpf, char nome[]){
    ContaBancaria *conta1;
    conta1 = malloc(sizeof(ContaBancaria));
    conta1->saldo = saldo;
    conta1->cpf = cpf;
    strcpy(conta1->nome, nome);
    return conta1;
    
}
```