#include<stdio.h>
typedef struct {
    char name[100];
    int price;
    float quantity;
    float totamnt;
}store;
void read(store *store1);
void write(store *store1);
int main(){
    store a[10];
    int n;
    printf("Enter the limit\n");
    scanf(" %d",&n);
    read(a);
    write(a);

}
void read(store *store1){
    int i;
    int n=3;
   for(i=0;i<n;i++){
    printf("\n enter the details of the %d thing\n",i);
    printf("Enter the name\n");
    scanf(" %s",store1[i].name);
    printf("enter the price\n");
    scanf(" %d",&store1[i].price);
    printf("Enter the quantity\n");
    scanf(" %f",&store1[i].quantity);
    printf("Enter the total amount\n");
    scanf(" %f",&store1[i].totamnt);
   }
}
void write(store *store1){
    int i;
    int n=3;
   for(i=0;i<n;i++){
    printf("\n  the details of the %d thing\n",i);
    printf("\n");
    printf("name : %s",store1[i].name);
    printf("\n");
    printf("price : %d",store1[i].price);
    printf("\n");
    printf("quantity : %f",store1[i].quantity);
    printf("\n");
    printf("total amount is : %f",store1[i].totamnt);
   }
}

