#include<stdio.h>
int len(char a[]);
void rev(char *a,int l);
int  main(){
    int i,l;
    char a[100];
    printf("enter the string\n");
    scanf(" %s",a);
    l=len(a);
    rev(a,l);
    printf("\nThe reversed string is %s",a);

}
int len(char a[]){
    int i;
    for(i=0;a[i]!='\0';i++);
    return i;

}
void rev(char *s,int l){
    int i,j;
    char c;
    for(i=0,j=l-1;i<l/2;i++,j--){
        c=s[i];
        s[i]=s[j];
        s[j]=c;



    }

}