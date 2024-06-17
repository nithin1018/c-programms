#include<stdio.h>
#include<string.h>

void main(){
    char a[100],b[100];
    int i,l;
    printf("Enter a string\n");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++){
        b[i]=a[l-i-1];
    }
    b[l]='\0';
    printf("The reverse string is \n %s",b);
}
