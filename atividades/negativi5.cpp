#include <stdio.h>
#include <stdlib.h>
main(){
  float x, somaP=0, somaN=0;
  int cn=0;
  do{
    scanf("%f",&x);
    if(x<0){
      cn++;
      somaN = somaN + x;
    }else{
      somaP = somaP + x;
    }
  }while(cn<5);
  printf("Soma dos positivos=%.2f\n",somaP);
  printf("Soma dos negativos=%.2f\n",somaN);
  system("pause");
}