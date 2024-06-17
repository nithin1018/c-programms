#include<stdio.h>
void main(){
    int num,rev,sum=0,n;
    printf("enter the number");
    scanf("%d",&num);
    rev=num;
    while(num!=0){
        n = num%10;
        sum = (sum*10) + n;
        num=num/10;
    }
    printf("%d\n",sum);
    if(sum==rev){
        printf("the number is palindrome");
    }else
    printf("The number is not palindrome");
}