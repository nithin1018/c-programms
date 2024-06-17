#include<stdio.h>
int main() {
    FILE *fp,*fp1,*fp2;
    int a,odd[100],even[100],num[100];
    int n,i;
    fp=fopen("num.txt","w");
    fp1=fopen("even.txt","w");
    fp2=fopen("odd.txt","w");
    if(fp == NULL && fp1 == NULL && fp2 == NULL){
        printf("the file is failed to open ");
        return -1;
    }
    printf("How many nmumbers do you want to enter\n");
    scanf("%d",&n);
   for(i = 0; i < n; i++){
   scanf("%d",&num[i]); 
    //getch(fp);
}
  for(i = 0; i < n; i++){
        fprintf(fp, "%d\n", num[i]);
    }

   
    fclose(fp);
    fp=fopen("num.txt","r");
while(fscanf(fp, "%d", &n) != EOF){
    if(n % 2 == 0){
        fprintf(fp1, "%d\n", n);
    } else {
        fprintf(fp2, "%d\n", n);
    }
}
    
  fclose(fp);
    fclose(fp1);
    fclose(fp2);
    return 0;
    
}





