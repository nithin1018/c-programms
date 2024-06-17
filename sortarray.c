#include<stdio.h>
#include<string.h>
void sort(char a[][100],int n){
    char b[100];
    int i, j;
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(strcmp(a[i], a[j]) > 0){
                strcpy(b, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], b);
            }
        }
    }
}


void main(){
      char a[100][100];
      int n,i;
      printf("Enter how many names\n");
      scanf("%d",&n);
      printf("Enter the names\n");
      for(i=0;i<n;i++){
        scanf("%s",a[i]);
      }
      
      sort(a,n);
      printf(" the names\n");
      for(i=0;i<n;i++){
        printf("%s\n",a[i]);
      }
}
