
#include <stdio.h>

int fiboRecur(int x){ //sendo X a posição do número que queremos na sequência
    if(x>1){
        return fiboRecur(x-1) + fiboRecur(x-2);
    }else{
        if(x==0){return 0;}
        else{return 1;}
    }
}

int main()
{
    printf("Resultado: %i", fiboRecur(13));

    return 0;
}
