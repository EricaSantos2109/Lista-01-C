#include <stdio.h>
int main(){
    int n, i, j ,k ,multi=0, multj=0;
    printf("Entre com o valor de n: \n");
    scanf("%d", &n);
    printf("Entre com o valor de i e j: \n");
    scanf("%d %d", &i, &j);
    for(k=0; k< n; k++)
    {
        if(multi< multj){
            printf("%d", multi);
            multi = multi + i;
        }
        else{
            printf("%d", multj);
            if(multi == multj)
            {
                multi = multi + i;
            }
            multj = multj + j;
        }
    }
    printf("\n");
    return 0;
}
