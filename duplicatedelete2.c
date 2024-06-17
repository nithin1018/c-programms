#include<stdio.h>
int main(){
    int a[100],n,unique,newlen=0,i,j;
    printf("Enter the numbers of elements\n");
    scanf("%d",&n);
    printf("Enter the numbers");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        unique=1;
        for(j=0;j<newlen;j++){
            if(a[i]==a[j]){
                unique=0;
                break;
            }
        }
        if(unique){
            a[newlen++]=a[i];

        }
    }
    printf("Array without duplicates: ");
    for (int i = 0; i < newlen; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
