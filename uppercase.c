#include<stdio.h>
#include<string.h>
void main(){
    char a[100],a1[100];
    int l,i;
    printf("Enter your name\n");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++){
        if(a[i]>=97 && a[i]<=122){
            a[i]=a[i]-32;
        }
    }
    printf("%s",a);
}