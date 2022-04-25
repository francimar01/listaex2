#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c;
    printf("DIGITE UM NUMEROS:\n");
    scanf("%f",&a);
    printf("DIGITE OUTRO NUMERO:\n");
    scanf("%f",&b);
    c=a-b;
    printf("O primeiro numero menos o segundo:%.1f\n",c);
    c=pow(a,b);
    printf("O primeiro elevado ao segundo:%.1f\n",c);
    c=pow(a,2);
    printf("O quadrado do primeiro numero:%.1f\n",c);
    c=pow(b,3);
    printf("O cubo do segundo numero:%.1f\n",c);
    c=1/b;
    printf("O inverso do segundo numero:%.2f",c);

    return 0;
}