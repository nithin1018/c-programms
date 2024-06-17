#include<stdio.h>
int main(){
    int a[10][10],b[10][10],m,n,i,j,sym=0,skw=0,k;
    printf("enter the row and column of the matrix\n");
    scanf("%d%d",&m,&n);
    printf("enter the matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
          b[j][i] =a[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
           if(a[i][j]==b[i][j]){
                sym++;
            }
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
           if(a[i][j]==-(b[i][j])) {
                skw++;
            }
        }
    }
    k=n*m;
    if(sym == k){
        printf("the matrix is symmetric");
    }else if (skw==k){
        printf("The matrix is skew symmetric");
    }else{
        printf("neither skew nor symmetric matrix");
    }
    return 0;
}