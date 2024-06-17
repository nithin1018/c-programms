#include<stdio.h>
int fact(int n){
    int f=n;
    if(n==0)
    return 1;
    else{
        f = f*fact(n-1);
    }
}
void main(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    printf("\n%d",fact(a));
}