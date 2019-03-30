/*5. Dados o número n de alunos de uma turma e suas notas da primeira prova,
determinar a maior e a menor nota obtidas por essa turma (Nota máxima = 10
e nota mínima = 0), não permitindo que sejam digitadas notas inválidas. CERTO */

#include <stdio.h>
void main()
{
    float nota_maior, nota_menor, nota, i;
    int alunos;
    nota_maior = 0;
    nota_menor = 10;
    printf("entre com o numero de alunos da turma: \n");
    scanf("%d", &alunos);
    for(i=1; i<=alunos; i++)
    {
        printf("entre com a nota do aluno de 0 a 10: \n");
        scanf("%f", &nota);
        if(nota_maior < nota)
        {
            nota_maior = nota;
        }
        if(nota_menor > nota)
        {
            nota_menor = nota;
        }
    }
    printf("menor nota da turma foi:'%.2f' \n e a maior nota foi: \n '%.2f' ", nota_menor, nota_maior);
}
