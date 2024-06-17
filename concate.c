#include<stdio.h>
#include<math.h>
#include<string.h>
void main(){
    char a[100],b[100];
    int i,l1,l2,j;
    printf("The first name\n");
    scanf("%s",a);
    printf("second name\n");
    scanf("%s",b);
//printf("%s\n",strcat(a,b));
    l1=strlen(a);
    l2=strlen(b);
    for(i=l1,j=0;a[j]!='\0';j++,i++){
        a[i]=b[j];
    }
    printf("The the concatinated string is %s\n",a);
    



}