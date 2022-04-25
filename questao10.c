#include<stdio.h>
#define pag 20.00
int main(){
    int dia;
    float t,p,d;
    printf("DIGITE A QUANTIDADE DE DIA:");
    scanf("%d",&dia);
    d=pag * dia;
    p=(8.0/100.0)*d;
    t=d - p;
    if(dia<=0){
    printf("TOTAL A PAGAR: 00.00");
    }else
    printf("TOTAL A PAGAR:%.2f",t);
    return 0;
}