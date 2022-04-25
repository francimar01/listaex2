#include<stdio.h>
#include<math.h>
#define pi 3.141592
int main(){
    float l,d,r,a;
    printf("QUAL O TAMANHO DO LADO DO QUADRADO:");
    scanf("%f",&l);
    d=l;
    r=d/2;
    printf("QUAL O RAIO DO CIRCULO:%.1f\n",r);
    a=pow(l,2);
    printf("AREA DO QUADRADO:%.1f\n",a);
    a=pi*pow(r,2);
    printf("AREA DO CIRCLO:%.1f\n",r);
    return 0;   
}