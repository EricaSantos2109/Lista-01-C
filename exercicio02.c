/*2. Dado um número inteiro positivo n, calcular a soma dos n primeiros
números naturais. CERTO */
#include <stdio.h>
void main()
{
    int n, soma, cont;
    soma = 0;
    cont = 1;
    printf("entre com o valor de um numero positivo:");
    scanf("%d", &n);
    while(cont<=n)
        {
        soma= soma + cont;
        cont = cont + 1;
        }
    printf("o valor da soma de '%d' eh '%d' \n", n, soma);
}
