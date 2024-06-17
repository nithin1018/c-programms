#include<stdio.h>
int main(){
    FILE *fp, *cpy;
    char org[100],copy[100],c;
    int i=0,j=1;;
    fp=fopen("abc.txt","r");
    cpy=fopen("abcd.txt","w");
    if(fp == NULL && cpy == NULL){
        printf("One of the files is failed to open");
        return -1;

    }
    while((c=fgetc(fp))!=EOF){
        copy[i]=c;
        i++;
        if(c == '\n'){
        j++;}
    }
     copy[i] = '\0';
    fputs(copy,cpy);
    printf("THE no of lines : %d, words with new line : %d",j,ftell(cpy));
    fclose(fp);
    fclose(cpy);
}