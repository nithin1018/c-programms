#include<stdio.h>
typedef struct {
    float real;
    float img;
}complex;
void addnum(complex c1,complex c2,complex*result);
void main(){
    complex c1,c2,result;
    printf("ENter the first number:\n");
    printf("REal\n");
    scanf("%f",&c1.real);
    printf("img\n");
    scanf("%f",&c1.img);
    printf("Enter the second number\n");
        printf("REal\n");
    scanf("%f",&c2.real);
    printf("img\n");
    scanf("%f",&c2.img);
    addnum(c1,c2,&result);
    printf("The result\n");
    printf("real : %f\nimg : %f",result.real,result.img);
    
}
void addnum(complex c1,complex c2,complex*result){
    result->img=c1.img+c2.img;
    result->real=c1.real+c2.real;
}