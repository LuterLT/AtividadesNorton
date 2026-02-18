/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int tri[10][3], eq=0, iso=0, esc=0, lado1=0, lado2=1, lado3=2, i;
    
    for (i=0; i<10; i++){
        printf("Diga o primeiro lado: ");
        scanf("%i", &tri[i][lado1]);
        printf("Diga o segundo lado: ");
        scanf("%i", &tri[i][lado2]);
        printf("Diga o terceiro lado: ");
        scanf("%i", &tri[i][lado3]);
        
        if(tri[i][lado1]==tri[i][lado2] && tri[i][lado2]==tri[i][lado3]){
            eq++;
        }
        else{
            if(tri[i][lado1]!=tri[i][lado2] && tri[i][lado2]!=tri[i][lado3] && tri[i][lado1]!=tri[i][lado3]){
                esc++;
            }
            else{iso++;}
        }
    }
    printf("\n\nA porcentagem de equiláteros é %i%%;\nA porcentagem de isóceles é %i%%;\nA porcentagem de escalenos é %i%%.", eq*10, iso*10, esc*10);
}