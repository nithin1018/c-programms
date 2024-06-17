#include<stdio.h>
void swap(int *x,int *y);
void main(){
    int x,y;
    printf("enter the values of x \n");
    scanf("%d",&x);
     printf("enter the values of y\n");
      scanf("%d",&y);
    swap(&x,&y);
    printf("x=%d   y=%d",x,y);
}
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}