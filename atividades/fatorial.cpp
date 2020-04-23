#include <stdio.h>
#include <stdlib.h>
main(){
  int n,f=1;
  printf("Qual o fatorial para calcular?");
  scanf("%d",&n);
  printf("%d! = 1",n);
  for(int i=n;i>=1;i--){
    printf("*d%",i);
    f = f*i;
  }
  printf(" = %d\n",f);
  system("pause");
}