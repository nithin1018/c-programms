#include<stdio.h> 
#include<math.h>
void main(){
    int n,rem,i=0,dec=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n!=0){
        rem = n%10;
        dec = dec + (rem*pow(2,i));
        i++;
        n=n/10;
    }
    printf("\n the decimal number is %d",dec);
}