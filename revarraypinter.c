#include<stdio.h>
void main(){
    int n,i,a[10];
    int *ptr;
    printf("Enter the limit pf the array\n");
    scanf("%d",&n);
    ptr=&a[0];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",ptr);
        ptr++;
    }
    printf("The reversed string is \n");
    for(i=n;i>0;i--){
         ptr--;
        printf("%d\n",*ptr);
       
    }

}