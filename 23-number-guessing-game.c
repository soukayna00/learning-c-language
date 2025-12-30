#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int min=1;
    int max=100;
    int number=(rand()%(max-min+1))+min;
    int guess;
    int tries=0;
    // printf("%d",number);
   do{
    printf("Guess a number between %d - %d ",min,max);
    scanf("%d",&guess);
    tries++;
    if(guess>number){
        printf("too high \n");
    }else if (guess<number){
        printf("too low \n");
    }else{
        printf("correct ! \n");

    }
   }while(guess!=number);
   printf("the answer is %d \n",number);
   printf("it took you %d ",tries);
    

    return 0;
}