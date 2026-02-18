/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int vacinacao[10][3], Az1=0, Co1=0, Pf1=0, Ja1=0, i, idade=0, primeira=1, segunda=2, Az2=0, Co2=0, Pf2=0, Ja2=0, mesma=0;

	printf("1-Az; 2-Co; 3-Pf; 4-Ja.\n");

	for (i=0; i<10; i++) {
		printf("Digite a idade: ");
		scanf("%i", &vacinacao[i][idade]);
		printf("Digite o primeiro tipo de dose: ");
		scanf("%i", &vacinacao[i][primeira]);
		printf("Digite o segundo tipo de dose: ");
		scanf("%i", &vacinacao[i][segunda]);
        if(vacinacao[i][primeira]==vacinacao[i][segunda]){mesma++;}


		switch (vacinacao[i][primeira]) {
		case 1:
			Az1++;
			break;
		case 2:
			Co1++;
			break;
		case 3:
			Pf1++;
			break;
		case 4:
			Ja1++;
			break;
		default:
			break;
		}


		switch (vacinacao[i][segunda]) {
		case 1:
			Az2++;
			break;
		case 2:
			Co2++;
			break;
		case 3:
			Pf2++;
			break;
		case 4:
			Ja2++;
			break;
		default:
			break;

		}
	}
	printf("\n\nA quantidade de doses na primeira dose C) Az=%i; Co=%i; Pf=%i; Ja=%i", Az1, Co1, Pf1, Ja1);
	printf("\nA quantidade de doses na segunda dose é Az=%i; Co=%i; Pf=%i; Ja=%i", Az2, Co2, Pf2, Ja2);
	
	printf("\n\nQuantidade que tomaram o mesmo tipo de Vacina nas 2 doses é: %i", mesma);
	
	printf("\n\n O percentual em todas as doses é: Az=%i%%; Co=%i%%; Pf=%i%%; Ja=%i%%", (Az1+Az2)*10, (Co1+Co2)*10, (Pf1+Pf2)*10, (Ja1+Ja2)*10);
	
}
