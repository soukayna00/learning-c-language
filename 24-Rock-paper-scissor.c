#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>   


int getComputerChoice();
int getUserGuess();
void check_the_winner(int userChoice,int computerchoice);
void  setpickValue(int pick,char *Pickvalue);

int main(){
    srand(time(0));
    int userpick=getUserGuess();
    int computerpick=getComputerChoice();
    char userPickvalue[40];
    char comptpickvalue[40];
    setpickValue(userpick,userPickvalue);
    setpickValue(computerpick,comptpickvalue);


    printf("you have picked %s:\n",userPickvalue);
    printf("computer have picked %s\n",comptpickvalue);
    check_the_winner(userpick,computerpick);



    return 0;
}

 int getComputerChoice(){
    int min=1;
    int max=3;
    int choice=0;
    choice=(rand()%(max-min+1))+min;
    return choice ;

}

int getUserGuess(){
    int Uchoice=0;
    printf("**Rock paper scissor**\n");
    printf("choose an option : \n");
    printf("1-Rock \n");
    printf("2-Paper \n");
    printf("3-Scissor \n");
    printf("Enter your choice :\n");
    scanf("%d",&Uchoice);
    while(Uchoice>3||Uchoice<1){
        printf("please enter a number between 1 and 3: ");
        scanf("%d",&Uchoice);
    } 
    return Uchoice;

}
void check_the_winner(int userChoice,int computerchoice){
   if(userChoice==computerchoice){
      printf("it s a tie \n");
   }else if((userChoice == 1 && computerchoice == 3) ||
               (userChoice == 2 && computerchoice == 1) ||
               (userChoice == 3 && computerchoice == 2)){
        printf("You win !");
    }else{
        printf("computer win! \n");
    }
}

void  setpickValue(int pick,char *Pickvalue){
     if(pick==1){
        strcpy(Pickvalue,"Rock");
     }else if(pick==2){
        strcpy(Pickvalue,"Paper");
     }else{
        strcpy(Pickvalue,"Scissors");
     }
}

