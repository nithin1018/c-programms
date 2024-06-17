#include<stdio.h>
#include<math.h>
 void main(){
    int n,i,j,k=0,count=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("The prime numbers in the list are\n");
    for(i=2;k<n;i++){
        count=1;
        for(j=2;j<=sqrt(i);j++){
          
             if(i%j==0){
                count=0;
                break;
             }  
        }
        if(count==1){
        printf("%d\n",i);
        k++;
        }
    }
 }