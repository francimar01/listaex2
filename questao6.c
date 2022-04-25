#include<stdio.h>
#include <math.h>
#define pi 3.141592
int main(){
    float volume,r,h;
    printf("DIGITE O RAIO DO CILINDRO:");
    scanf("%f",&r);
    printf("DIGTE A ALTURA DO CILINDRO:");
    scanf("%f",&h);
    volume=pi*pow(r,2)*h;
    printf("O VOLUME TOTAL:%f",volume);
    return 0;
}