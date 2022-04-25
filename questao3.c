#include <stdio.h>
int main(){
    int a,b;
    printf("DIGITE O VALOR DE A:");
    scanf("%d",&a);
    printf("DIGITE O VALOR DE B:");
    scanf("%d",&b);
    a= a + b; 
    b= a - b; 
    a= a - b;

    printf("novos valores: A %d B %d",a ,b);
    return 0;
}