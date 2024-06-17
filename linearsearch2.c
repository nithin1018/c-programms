#include<stdio.h>
void main(){
    int a[100],i,find,n;
    printf("enter the limit of the array\n");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("The number to be find\n");
    scanf("%d",&find);
    for(i=0;i<n;i++){
        if(a[i]==find){
            printf("The number %d is found at %d  index\n",find,i);
            break;
        }
    }
    if(i>=n){
        printf("The number is not found\n");
    }

}