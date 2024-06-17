#include<stdio.h>
#include<string.h>
void main(){
    char a[100];
    int l1,i;
    printf("enter the character\n");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++);
    printf("the lenght of the strig is : %d \t %d",strlen(a),i);
    
}