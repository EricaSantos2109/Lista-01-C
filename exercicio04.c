/* 4. Dados um inteiro x e um inteiro não-negativo n, calcular x^n. CERTO*/
void main()
{
    double x, n, i, resultado;
    resultado = 1;
    printf("entre com o numero base x: \n");
    scanf("%lf", &x);
    printf("entre com o numero expoente n: \n");
    scanf("%lf", &n);
    for(i=1; i<=n; i++)
    {
     resultado = resultado * x;
    }
    printf("o resultado de '%.2lf' elevado a '%.2lf' eh: '%.2lf' \n", x,n, resultado);
}
