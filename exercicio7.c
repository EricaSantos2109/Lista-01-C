/* 7. Dado um inteiro não-negativo n, determinar n! */
#include <stdio.h>
void main()
{
    int n;
    int i;
    int fatorial;
    fatorial = 1;
    printf("entre com um numero: \n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        fatorial = fatorial * i;
    }
    printf("o fatorial de '%d' eh '%d' \n", n, fatorial);
}
