#include<stdio.h>

void dismult(int a[][10],int r,int c);
void readmat(int a[][10] ,int r ,int c){
    int i,j;
         printf("enter the matrix");
         for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                scanf("%d",&a[i][j]);
            }
         }
}
void matmult(int a[][10],int b[][10],int r,int c,int m){
    int i,j,k,sum=0,d[10][10];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            for(k=0;k<m;k++){
                sum=sum+(a[i][k]*b[k][j]);
            }
            d[i][j]=sum;
            sum=0;

        }
    }
    dismult(d,r,c);
}
void dismult(int a[][10],int r,int c){
    int i,j;
    printf("The mutliplied matrix is\n");
     for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
         }
}


void main(){
    int a[10][10],b[10][10];
    int r1,r2,c1,c2;
    printf("Enter the row and column of the first matrix");
    scanf("%d%d",&r1,&c1);
    printf("enter the row and column of the second matrix");
    scanf("%d%d",&r2,&c2);
    if(c1==r2){
        readmat(a,r1,c1);
        readmat(b,r2,c2);
        matmult(a,b,r1,c2,c1);
    }else
    printf("The matric cant be multiplied");
}