/* 1. Dada uma seqüência de números inteiros não-nulos, seguida por 0,
imprimir seus quadrados. CERTO*/
#include <stdio.h>
void main()
{
int n, q, s;
printf("entre com a quantidade da sequencia de numeros que nao seja nulo:");
scanf("%d", &s);
while(s!=0)
    {
    printf("entre com o numero:");
    scanf("%d", &n);
    if(n!=0)
    {
        q = n * n;
        printf("o numero '%d' tem como quadrado '%d'. \n", n, q);
        s = s - 1;
    }
    else
        printf("o numero nao pode ser nulo \n");
    }
}
