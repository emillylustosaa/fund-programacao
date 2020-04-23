/*
fazer um algoritmo para receber o valor da massa de um material radioativo em gramas.
este material perde 1/4 de sua massa a cada 20 segundos.
o algoritmo deve mostrar o tempo (hh:mm:ss) necessário para que a massa se torne menor que 2g.
*/

#include <stdio.h>
#include <stdlib.h>
main(){
  float m;
  int se=0,h,mi;
  printf("Qual a massa inicial em gramas?");
  scanf("%f",&m);
  while(m>=2){
    se = se + 20;
    m = m - (1.0/4)*m;
  }
  ho = se / 3600;
  se = se % 3600;
  mi = se / 60;
  se = se % 60;
  printf("Tempo = %d hora, %d minutos, %d segundos    massa
  final=%fg\n",ho,mi,se,m);
  system("pause");
}