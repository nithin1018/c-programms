#include<stdio.h>
void main(){
    int n,i,j,a[100],count;
    printf("enter how many numbers an array\n");
    scanf("%d",&n);
    printf("enter the elements in the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the occurance of each elements in an array as follows\n ");
    for(i=0;i<n;i++){
        count=1;
        if(a[i]!=-1){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                a[j]=-1;
            }
           
        }
        printf("%d occurs %d times \n",a[i],count);}
         
    }
}