#include<stdio.h>
int power(int x,int n){
    if(n<=0){
        return 1;
    }else {
       return x*power(x,n-1);
    }
}

void main(){
    int x,n,i;
    printf("Enter the x and n \n");
    scanf("%d%d",&x,&n);
    printf("The result is %d\n",power(x,n));

}