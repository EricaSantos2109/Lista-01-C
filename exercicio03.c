/*Dado um número inteiro positivo n, imprimir os n primeiros naturais
ímpares. CERTO */
/*Exemplo: Para n=4 a saída deverá ser 1,3,5,7. */

#include <stdio.h>
void main()
{
    int n, cont, impar;
    printf("entre com o valor do numero:");
    scanf("%d", &n);
    impar = 1;
    cont = 0;
    while(cont < n)
    {
        printf("%d \n", impar);
        impar = impar + 2;
        cont = cont + 1;
    }
}
