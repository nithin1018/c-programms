 #include<stdio.h>
 void main(){
    int f=0,s=1,t,i,n;
    printf("enter how many numbers\n");
    scanf("%d",&n);
    printf("The fibanocci series are\n");
    for(i=0;i<n;i++){
        printf("%d\n",f);
        t=f+s;
        f=s;
        s=t;
    }

 }