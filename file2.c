#include<stdio.h>
int main(){
    FILE *fp;
    char c,s[100];
    fp=fopen("abc.txt","a");
    if(fp == NULL){
        printf("Failed to open the file\n");
        return -1;
    }
   
       scanf("%[^\n]", s);
       fprintf(fp, "%s", s);
    fclose(fp);
    return 0;
}