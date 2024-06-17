#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 typedef struct{
    char name[100];
    char adress[100];
    int dob;

 }stu;
  void main(){
    stu a[100];
    int i;
    for(i=0;i<5;i++){
        printf("Enter the detail of the %d student \n",i+1);
        printf("Enter the name of the student\n");
        scanf(" %[^\n]",a[i].name);
        printf("Enter the address of the student\n");
        scanf(" %[^\n]",a[i].adress);
        printf("Enter the dob in DD/MM/YY\n");
        scanf(" %d",&a[i].dob);
    }
    for(i=0;i<5;i++){
        printf("\n");
        printf(" the detail of the %d student \n",i+1);
       // printf(" the name of the student\n");
        printf("name : %s\n",a[i].name);
       // printf(" address of the student\n");
        printf("adress : %s\n",a[i].adress);
       // printf(" dob in DD/MM/YY\n");
        printf("DOB : %d\n",a[i].dob);
    }

  }