obs: o arquivo está em markDown então alguns trechos de código podem não aparecer  corretamente.

==**1- Qual o valor de y no final do programa?**==   

```
#include <stdio.h>  
int main()  
{  
	int y, *p, x;  
	y = 0;  
	p = &y;  
	x = *p;  
	x = 4;  
	++(*p);  
	x--;  
	(*p) += x++;
	return 0; 
}

```
**RESPOSTA:** 4

==**2-Teste e explique a diferença, caso exista, entre**==  
a-) `p++; (*p)++; *(++p);`
	**RESPOSTA:** O p++ incrementa 1 ao valor da variável e se for um ponteiro vai para o próximo elemento. O (*p)++ incrementa 1 no valor do ponteiro. O *(++p) vai para o proximo elemento e mostra o valor dele.
	
b) O que quer dizer `*(p+10)`?
	**RESPOSTA:** Quer dizer que vamos acessar o valor de P 10 posições a frente, ou seja na posição 10 .

==**3-Quais serão os valores de x, y e p ao final do trecho de código**==  
==abaixo?==  
```
int x, y, *p;y = 0;  
p = &y;  
x = *p;  
x = 4;  
(*p)++;  
--x;  
(*p) += x;
```
**RESPOSTA:**  `x=3, y=4, *p=4` 

==**4-Os programas (trechos de código) abaixo possuem erros. Qual(is)?**==  
==**Como deveriam ser?**==  
a)  
```
void main() {  
int x, *p;  
x = 100;  
p = x;  
printf(“Valor de p: %d.\n”, *p);}  

```
**RESPOSTA:** está escrito void main. Deveria ser int main com um return 0 ao fim do código.  Por fim, está escrito "p= x;" contudo isso está incorreto pois o endereço apontado pelo ponteiro se tornaria 100 e não o endereço de x, o correto seria "p = &x;"

b-)
```
void troca (int *i, int *j) {  
int *temp;  
*temp = *i;  
*i = *j;  
*j = *temp;}
```
**RESPOSTA:**  o erro está no fato do ponteiro não ter sido alocado e portanto aponta para um lugar aleatório o que pode gerar diversas complicações. Nessa situação poderia ter sido utilizado uma variável normal, o que é bem mais fácil, ou vc pode usar o malloc no temp.

c)  
```
char *a, *b;  
a = “abacate”;  
b = “uva”;  
if (a < b)  
printf (“%s vem antes de %s no dicionário”, a, b);  
else  
printf (“%s vem depois de %s no dicionário”, a, b);
```
**RESPOSTA:**  o correto seria `char *a = "abacate", b*= "uva";  if( strcmp(a,b)>0){...}else if(strcmp(a,b)<0){...}`. Vale ressaltar quem nessa resposta também deveria importar a biblioteca string.h .

==**5- Escreva uma função chamada troca que troca os valores dos**  
parâmetros recebidos. Sua assinatura deve ser:`void troca(float a, float *b);`==
**RESPOSTA:**
```
	void troca(float *a, float *b){
    float temp = *a;
    *a = *b;
    *b = temp;
	}
```
