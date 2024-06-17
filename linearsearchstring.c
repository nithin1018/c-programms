#include<stdio.h>
#include<string.h>
 void main(){
    int i,n,l1;
    char a[100],ch;
    printf("enter the string\n");
    scanf("%s",a);
    printf("Enter the charachter to be found\n");
    scanf(" %c",&ch);
    l1=strlen(a);
    for(i=0;i<l1-1;i++){
        if(a[i]==ch){
            printf("the letter %c is found at %d index",ch,i);
            break;
        }
    }
    if(l1-1<=i){
        printf("The number is not found");
    }
 }