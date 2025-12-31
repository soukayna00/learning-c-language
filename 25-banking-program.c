#include <stdio.h>

void checkbalance(float balance);
float deposit();
float withdraw(float balance );

int main(){
    int choice=0;
    float balance=0.0f;
    printf("\n***WELCOME TO THE BANK***\n");
    do{
       printf("\nselect an option\n");
       printf("\n1-check the balance\n");
       printf("\n2-deposit the money\n");
       printf("\n3-withdraw the money\n");
       printf("\n4-exit\n");
       printf("\nEnter your choice:");
       scanf("%d",&choice);
       switch(choice){
         case  1 :
           checkbalance(balance);
           break;
         case 2 :
           balance+=deposit();
           break;
         case 3 :
            balance-=withdraw(balance);
            break;
         case 4:
             printf("thank u for using the bank\n");
             break;
         default:
             printf("invalid choice !!\n");
       }

    }while (choice!=4);
    
    return 0;
}

void checkbalance(float balance){
    printf("your current balance is : $%.2f\n",balance);
}
float deposit(){
     float amount=0.0f;
     printf("enter amount to deposit $:");
     scanf("%f",&amount);
     if (amount<0){
         printf("invalid amount");
         return 0.0f;
     }else{
        printf("succesfully deposit $%.2f\n",amount);
        return amount;
     }
 
}
float withdraw(float balance ){
      float amount=0.0f;
      printf("enter amount to withdraw :$");
      scanf("%f",&amount);
       if (amount<0){
         printf("invalid amount\n");
         return 0.0f;
     }else if (balance<amount){
        printf("insufficient funds your balance is $%.2f",balance);
        return 0.0f;
     }else{
        printf("succesfuly withdraw $%.2f",amount);
        return balance;
     }
}