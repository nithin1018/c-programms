#include<stdio.h>
#include<string.h>
void main(){
    int i,l1,vowel=0;
    char a[100];
    printf("Enter the character\n");
    scanf("%[^\n]",a);
    l1=strlen(a);
    for(i=0;i<l1;i++){
        switch(a[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U': vowel++;
            break;
            default :
            break;

        }



    }
    printf("\nThe no: of vowel in the string is %d",vowel);
}