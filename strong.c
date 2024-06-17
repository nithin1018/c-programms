#include<stdio.h>
void main()
{
    int num,str,i,sum=0,j,fact;
    printf("Enter the numbers to be checked for strong\n");
    scanf("%d",&num);
str=num;
     while(num!=0){
        i=num%10;
        fact=1;
        for(j=1;j<=i;j++){
             fact=fact*j;
        }
        printf("\n%d",fact);
        num=num/10;
        sum=sum+fact;
     }
     printf("\n%d",sum);
     if(sum==str){
        printf("\nthe number is strong");
     }else {
        printf("\nthe number is not strong");
     }
}
