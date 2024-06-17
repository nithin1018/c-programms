#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c,d;
    float r1,r2;
    printf("enter a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d==0){
        printf("The roots are real and equal\n");
        r1=-b/(2.0*a);
        printf("The root is : %f",r1);
    }
    else if(d>0){
        printf("The roots are real but not equal\n");
        r1=(-b-(sqrt(d)))/(2.0*a);
       r2=(-b+(sqrt(d)))/(2.0*a);  
       printf("The root are : %f  %f",r1,r2);
    }
    else
    printf("The roots are imaginary");
}