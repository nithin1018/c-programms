#include<stdio.h>
void main(){
int i,n, a[100];
printf("enter the number\n");
scanf("%d",&n);
if(n==0){
    i=0;
}else if(n<0){
    i=-1;
}else {
    i=1;
}
switch (i)
{
case -1:
    printf("the number is negative");
    break;
case 1:
    printf("the number is positive");
    break;
    
default:
printf("the number is zero");
    break;
} 
}