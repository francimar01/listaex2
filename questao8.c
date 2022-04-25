#include<stdio.h>
int main(){
    int m,h,a;
    printf("DIGITE A QUANTIDADE EM MINUTOS:");
    scanf("%d",&m);
    h=m/60;
    a=m%60;
    printf("%d:%d",h,a);
    return 0;
}