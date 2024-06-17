#include<stdio.h>
#include<math.h>
void main(){
    int n,i,j,a[100],temp;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
        }
    }
    printf("the second largest elemetn in the array is :%d",a[n-2]);
}