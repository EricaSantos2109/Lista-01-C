/*6. Dados n e uma seq��ncia de n n�meros inteiros, determinar a soma dos
n�meros pares. CERTO*/
main()
{
    int i, seq, n, total;
    total = 0;
    printf("entre com a quantidade dos numeros da sequencia: \n");
    scanf("%d", &seq);
    for(i=0; i<seq; i++)
    {
        printf("entre com um numero: \n");
        scanf("%d", &n);
        if(n%2 == 0)
        {
            total = total + n;
        }
    }
     printf("%d", total);
}
