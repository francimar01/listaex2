#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    printf("DIGITE UM NÚMERO: ");
    scanf("%d",&a);
    printf("DIGITE OUTRO NÚMERO: ");
    scanf("%d",&b);
    c=a-b;
    printf("O primeiro número menos o segundo:%d\n",c);
    c=pow(a,b);
    printf("O primeiro elevado ao segundo:%d\n",c);
    c=pow(a,2);
    printf("O quadrado do primeiro número:%d\n",c);
    c=pow(b,3);
    printf("O cubo do segundo número:%d\n",c);
    printf("O inverso do segundo número:1/%d\n",b);
    return 0;
}