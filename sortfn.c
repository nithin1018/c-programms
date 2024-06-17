#include<stdio.h>
#include<string.h>

void sort(int a[], int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void main(){
    int a[100],n,i;
    printf("Enter the limit\n");
    scanf("%d",&n);
    printf("enter the numbers of the array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("the sorted array is \n");
     for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }

}