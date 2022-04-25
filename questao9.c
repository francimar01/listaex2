#include<stdio.h>


int main(){
    int kg;
    float z;
    printf("DIGITE A QUANTIDADE(kg):");
    scanf("%d",&kg);
    z=(30.0/100.0)*kg;
    printf("QUANTIDADE DE ZINCO:%.2fkg",z);
    return 0;
}