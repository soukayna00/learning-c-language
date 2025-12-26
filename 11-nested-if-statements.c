#include <stdio.h>
#include <stdbool.h>

int main(){
    float price=10.00;
    bool isStudent=false;
    bool isSenior=false;
    // student=$9
    // senior =$8
    // student and senior=$7
if(isStudent){
    if(isSenior){
            printf("you get a student discount of 10%\n");
            printf("you get a senior discount of 20%\n");
            price *=0.7;
    }
    else{
            printf("you get a student discount of 10%\n");
            price *=0.9;
    }
        
    }
    else{
    if(isSenior){
            printf("you get a senior discount of 20%\n");
            price *=0.8;
    }
}
    printf("The price of a ticket is $%.2f\n",price);

    return 0;
}
