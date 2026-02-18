
#include <stdio.h>

int exponenciacaoRecur(int x, int y){
    if(y==0){
        return 1;
    }else{
        return x*exponenciacaoRecur(x, y-1);
    }
}

int main()
{
    printf("Resultado 2 elevado a 4: %i", exponenciacaoRecur(2,4));

    return 0;
}
