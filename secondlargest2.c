#include<stdio.h>
void main(){
    int n,largest,s_largest,i,a[100],temp;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    largest=s_largest=a[0];
    for(i=1;i<n;i++){
     if(a[i]>largest){
        s_largest=largest;
        largest=a[i];

     }else if(a[i]>s_largest && a[i]<largest){
        s_largest=a[i];
     }
    }
    printf(" the second largest elements of the array is\n");
   
        printf("%d\n",s_largest);
 
}