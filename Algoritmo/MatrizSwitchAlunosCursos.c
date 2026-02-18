/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
//Eu coloquei um include a mais pois ele integra os Booleanos como apontado nesse post "https://medium.com/@om213992/c-boolean-5f95db5e6ede"
int main()
{
    int alunos[10][3], i, j, ads=0, gecom=0,evento=0, rh=0, cpf=0, idade=1, curso=2, cpDigi, idaDigi, curDigi, divisor=0;
    float media;
    bool repetido=false; //Como eu já disse, usei o include para "habilitar" o uso de variáveis booleanas
    
    printf("1-ADS 2-GECOM 3-Eventos 4-RH");
    for(i=0; i<10; i++)
    {
        repetido = false;
        printf("\nDigite o cpf(sem pontuações):  ");
        scanf("%i", &cpDigi);
        printf("Digite a idade:                ");
        scanf("%i", &idaDigi);
        printf("Digite o curso:                ");
        scanf("%i", &curDigi);  
        
        for(j=0; j<i; j++)
        {
            if(cpDigi == alunos[j][cpf])
            {
                repetido=true;
                break;
            }
        }
        if(repetido==false)
        {
            alunos[i][cpf]=cpDigi;
            alunos[i][idade]=idaDigi;
            alunos[i][curso]=curDigi;
            
            media += idaDigi;
            divisor++;
            
            switch(curDigi){
                case 1: 
                    ads++;
                    break;
                case 2:
                    gecom++;
                    break;
                case 3:
                    evento++;
                    break;
                case 4:
                    rh++;
                    break;
                default:
                    break;
            }        
        }
        else{printf("CPF repetido, dados não cadastrados!\n");}
    }
    printf("\n\nA quantidede de inscritos para ADS:%i; Gecom:%i; Eventos:%i; Rh:%i;", ads, gecom, evento, rh);
    printf("\nA média da idade dos inscritos é:  %.2f", media/divisor);
    //estou usando o divisor pq assim sou capaz de fazer a média com base no número de dados que foram cadastrados
}