#include<stdio.h>
void main(){
    int a[10][10];
    int i,j,r,c;
    printf("enter the row and column of the matrix");
    scanf("%d%d",&r,&c);
    printf("enter the  matrix");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);

        }
    }
    printf("the transpose of the matrix is \n");
        for(i=0;i<c;i++){
        for(j=0;j<r;j++){
          printf("%d\t",a[j][i]);


        }
        printf("\n");
    }
}