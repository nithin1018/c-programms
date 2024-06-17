#include<stdio.h>
void main(){
    int i,k,n,num[100],temp;
    printf("enter how many numbers to printed\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<n-1;i++){
        for(k=0;k<n-i-1;k++){
            if(num[k]>num[k+1]){
              temp=num[k];
              num[k]=num[k+1];
              num[k+1]=temp;
            }
        }
    }
    printf("\n the swapped elements are\n");
     for(i=0;i<n;i++){
        printf("\n%d",num[i]);
    }

}