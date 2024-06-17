#include<stdio.h>
#include<string.h>
typedef struct 
{
    char name[100];
    int rollno;
    int marks[10];
    char grade[10];
}stud;
void readmark(stud *s);
void calcgrade(stud *s);
void sort(stud *s,int n);
 void main(){
    int i,n,j;
    stud s1[100];
    printf("Enter how many students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
         printf("\nEnter the details of the %d student \n",i+1);
         printf("ENter the name\n");
         scanf(" %[^\n]",s1[i].name);
         printf("Enter the roll number\n");
         scanf(" %d",&s1[i].rollno);
         printf("Enter the marks of the 5 subject of this student\n");
         readmark(&s1[i]);
         calcgrade(&s1[i]);
        
    }
    sort(s1,n);
    printf("\n\n\n");
    for(i=0;i<n;i++){
        printf("The full details of the %d student\n",i+1);
        printf("%d . Name : %s\n",s1[i].rollno,s1[i].name);
        for(j=0;j<5;j++){
            printf("The mark of the %d subject is %d  grade : %c\n",j+1,s1[i].marks[j],s1[i].grade[j]);
        }

    }
 }
 void readmark(stud *s){
    int i;
    for(i=0;i<5;i++){
        printf("Enter the mark of the %d subject",i+1);
        scanf(" %d",&s->marks[i]);

    }
 }
 void calcgrade(stud *s){
    int i;
    for(i=0;i<5;i++){
        if(s->marks[i]>90){
            s->grade[i]='A';
        }else if(s->marks[i]>80){
            s->grade[i]='B';

        }else if(s->marks[i]>70){
            s->grade[i]='C';

        }else if(s->marks[i]>60){
            s->grade[i]='D';

        }else if(s->marks[i]>50){
            s->grade[i]='E';
        }else {
            s->grade[i]='F';
        }
    }
 }

   void sort(stud *s, int n) {
    int i, j;
    stud temp;
    for (i = 1; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            if (strcmp(s[j].name, s[j + 1].name) > 0) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}