#include<stdio.h>
#include<string.h>
void main(){
    char a[100],b,c[100];
    int i,l;
    printf("enter the string\n");
    scanf("%s",a);
    l=strlen(a);
    strcpy(c,a);
    for(i=0;i<l/2;i++){
         b=a[i];
         a[i]=a[l-i-1];
         a[l-i-1]=b;
    }
    printf("the reversed string is : %s\n",a);
          if(!strcmp(a,c)){
            printf("The entered string is palindrom");
          }else 
          printf("Not palindrom");
}