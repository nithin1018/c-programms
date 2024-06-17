#include<stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }else {
        return n*fact(n-1);
    }
}
void main(){
    int n,r,i;
    printf("Enter the n and r\n");
    scanf("%d%d",&n,&r);
    i=fact(n)/(fact(r)*fact(n-r));
    printf("the ncr is : %d",i);
}