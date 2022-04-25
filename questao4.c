#include<stdio.h>
int main(){
    int a,b,d,r;
    printf("DIGITE UM NUMERO:");
    scanf("%d",&a);
    printf("DIGITE OUTRO NUMERO:");
    scanf("%d",&b);
    d=a/b;
    r=a%b;
    printf("RESULTADO DA DIVISAO:%d\n",d);printf("RESTO DA DIVISAO:%d\n",r);
    return 0;
}