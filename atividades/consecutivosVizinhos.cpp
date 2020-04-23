#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    int n, x, a, tem=0; s1, s2;
    printf("Quantos valores?");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("Qual o %d# valor?",i);
        scanf("%d",&x);
        if (i>1){
            if (tem==0 && abs(a-x)==1){
                tem=1;
                s1=a;
                s2=x;    
            }
        }
        a = x;
    }
    if(tem==1){
        printf("%d e %d sao consecutivos e vizinhos na digitacao\n",s1,s2);
    }else{
        printf("Nao foi digitiado consecutivos vizinhos\n");
    }
   system("pause");
}
    