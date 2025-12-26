#include <stdio.h>
#include <stdbool.h>


int main(){
  
//while loop=continue some code while condition remains true 
//it must be true to us to enter the loop
  
   bool isRunning=true;
   char response='\0';
   do{
       printf("you are playing a game\n");
       printf("would you like to continue?(Y=yes,N=no)\n");
       scanf(" %c",&response);
       if(response!='Y' && response!='y'){
          isRunning=false;
       }
      
       
   }while (isRunning);
   printf("you exit the game");

     return 0;
}