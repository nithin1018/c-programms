#include<stdio.h>
#include<math.h>
 int checkprime(int a){
    int i;
    if(a<=1)
     return 0;
    for(i=2;i<sqrt(a);i++){
         if(a%i==0){
            return 0;
         }
    }
    return 1;
 }
 void printprime(int a){
    int i;
    for(i=2;i<a;i++){
        
    }
 }
 void main(){
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    if(checkprime(n)){
        printf("the number is prime");
    }else
    printf("Not prime");
 }