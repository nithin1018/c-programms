#include<stdio.h>
void main(){
    int num[100],n,i,f;
    printf("Enter how many number");
    scanf("%d",&n);
    printf("Enter the numbers");
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    printf("Enter the number to be find");
    scanf("%d",&f);
    for(i=0;i<n;i++){
        if(num[i]==f){
            printf("the number is found at %d index",i);
            break;
        }

    }

    if(i>=n){
        printf("the number is not found in the array\n");
        num[n]=f;
        for(i=0;i<=n;i++){
            printf("\n%d",num[i]);
        }
    }
}