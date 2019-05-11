#include <stdio.h>

int main() {
  int i=1, n;

  printf("Digite o valor de n: ");
  scanf("%d",&n);
    while((i*(i+1)*(i+2)) < n){
        i++;
    }
  if((i*(i+1)*(i+2)) == n){
    printf("eh triangular pq o %d eh produto de %d*%d*%d \n", n, i, i+1, i+2);
  }
  else{
    printf("%d nao e' triangular\n", n);
  }
  return 0;
}
