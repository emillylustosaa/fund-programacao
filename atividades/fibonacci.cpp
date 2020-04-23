#include <stdio.h>
#include <stdlib.h>
main(){
  int a=1, b=1, c;
  printf("1 1");
  for(int mes=3;mes<=24;mes++){
    c = a + b;
    printf("%d",c);
    a = b;
    b = c;
  }
  printf("\nTotal de casais de coelhos ao final de 2 anos= %d\n",c);
  system("pause");
}