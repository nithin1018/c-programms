#include<stdio.h>
#include<math.h>
void main(){
    int n,i,a[100],j,sum=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(j=0,i=1;i<=n/2;i++){
        if(n%i==0){
         sum+=i;
           j++;
        }
    }
  /*  for(i=0;i<j;i++)
{
      sum+=a[i];
}*/
    if(sum==n){
        printf("The number is a perfect number");
    }
    else 
    printf("The number is not a perfect number ");
}