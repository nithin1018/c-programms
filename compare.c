#include<stdio.h>
#include<string.h>
int comp(char a[],char b[],int l1, int l2){
  int i;
  for(i=0;i<l1 && i<l2;i++){
    if(a[i]>b[i]){
        return 1;
    }else if(b[i]>a[i]){
        return -1;
    }
  }
  if (l1 < l2) {
    return -1;
  } else if (l1 > l2) {
    return 1;
  }
  return 0;
}

void main(){
    char a[100],b[100];
    int l1,l2,i;
    printf("Enter the first name\n");
    scanf("%s",a);
    printf("Enter the second name\n");
    scanf("%s",b);
    //printf("%d",strcmp(a,b));
    l1=strlen(a);
    l2=strlen(b);
    printf("%d",comp(a,b,l1,l2));
}