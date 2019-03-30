/*13. Dados três números, imprimi-los em ordem crescente. CERTO*/
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("entre com o valor do primeiro numero: \n");
    scanf("%d", &a);
    printf("entre com o valor do segundo numero: \n");
    scanf("%d", &b);
    printf("entre com o valor do terceiro numero: \n");
    scanf("%d" ,&c);
    if(a==b==c)
        {
        printf("os valores sao iguais '%d',\n '%d', \n '%d' \n", a, b, c);
        }
    else if(a <= b && b <=c)
        {
        printf("a ordem eh: \n '%d', \n '%d', \n '%d' ", a, b, c);
        }
    else if(a >= b && b >=c)
        {
        printf("a ordem eh: \n '%d', \n '%d', \n '%d' ", c, b, a);
        }
    else if(b >=a && a >=c)
    {
        printf("a ordem eh: \n '%d', \n '%d', \n '%d' ", c, a, b);
    }
    else if(c >= a && a >= b)
    {
        printf("a ordem eh: \n '%d', \n '%d', \n '%d' ", b, a, c);
    }
    else if(b >=c && c>=a)
    {
        printf("a ordem eh: \n '%d', \n '%d', \n '%d' ", a, c, b);
    }
}
