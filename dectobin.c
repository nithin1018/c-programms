#include<stdio.h>
void main(){
    int rem,n,div[100],i=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0){
        div[i]=n%2;
        i++;
        n=n/2;
    }
    printf("\n");
    for(i=i-1;i>=0;i--){
        printf("%d",div[i]);
    }
}