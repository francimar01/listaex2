#include <stdio.h>
int main(){
    float area,base,altura;
    printf("DIGITE A BASE:");
    scanf("%f",&base);
    printf("DIGITE A ALTURA:");
    scanf("%f",&altura);
    area=base*altura;
    printf("AREA:%.1f",area);
    return 0;
}