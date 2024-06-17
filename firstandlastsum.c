#include<stdio.h>
void main(){
    int n,fd,ld,sum;
    printf("enter the number");
    scanf("%d",&n);
    ld=n%10;
    while(n>10){
        n=n/10;
    }
    fd=n;
    printf("\n the sum is %d",fd+ld);
}