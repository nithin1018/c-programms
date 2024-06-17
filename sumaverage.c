#include<stdio.h>
void sum1(int a[],int n,int *sum, float *avg){
    int i;
    
    for(i=0;i<n;i++){
        *sum+=a[i];
    }
    *avg=(float)(*sum)/n;
}
void main(){
    int n,sum=0,a[100],i;
    float avg=0;
    printf("enter the limit\n");
    scanf("%d",&n);
    printf("Enter the number \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sum1(a,n,&sum,&avg);
    printf("Sum : %d \n Average : %f",sum,avg);
}