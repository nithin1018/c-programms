#include<stdio.h>
void main(){
    int n,i,j,k=1;
    printf("How manu patterns to be printed\n");
    scanf("%d",&n);
    printf("the floyds traingle is\n");
    for(i=0;i<n;i++){
        k=1;
        for(j=0;j<=i;j++){
            printf("*\t");
           /* printf("%d\t",k);
            k++;*/
        }
        printf("\n");
    }
}