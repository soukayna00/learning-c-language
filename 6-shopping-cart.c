#include <stdio.h>

int main(){
    char item[15]="";
    float price=0.0f;
    int quantity=0;
    /*  float total=price*quantity; 
    (it wont work because it should be after asking for the 
     input or else it stores  0 )   */

    printf("what item would you like to buy :\n");
    scanf(" %s",&item);
    printf("what is the price for each ?\n");
    scanf(" %f",&price);
    printf("how many would you like ?;\n");
    scanf(" %d",&quantity);
    float total=price*quantity;
    printf("you have bought %d %s/s\n with the price $%.2f the total is :$ %.2f",quantity,item,price,total);
    return 0;
}