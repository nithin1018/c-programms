#include<stdio.h>
void main(){
    int a[10][10],sr=0,sc=0,i,j,k=0,tsr=0,tsc=0;
    printf("Enter the matrix");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]); 
        }
    }
    printf("the sum of individual row and column are as follows\n");
    for(i=0;i<3;i++){
        k++;
        sc=0,sr=0;
        for(j=0;j<3;j++){
            sr=sr+a[i][j];
            sc=sc+a[j][i];
        }
        tsr=tsr+sr;
        tsc=tsc+sc;
        printf("\n%d row sum is : %d , %d column sum is : %d\n",k,sr,k,sc);
    }
    printf("Full row sum is %d  & Full column sum is %d\n",tsr,tsc);
}