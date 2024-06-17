#include<stdio.h>
#include<string.h>
void main(){
    char a[100],*strt,*end,temp;

    char *ptr;
    int l,i;
    ptr=a;
    printf("ENter the string\n");
    scanf("%s",ptr);
    strt=ptr;
    end=strt+(strlen(a)-1);
    while(strt<end){
        temp=*strt;
        *strt=*end;
        *end=temp;
        strt++;
        end--;


    }
    printf("\nthe reversed string is %s",ptr);
}