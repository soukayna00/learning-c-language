#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
/*
pseudo random numbers : Appear random but are determinated by a mathematical 
formula that uses a seed value to generate predictable sequence of numbers
advanced Mersenne Twister or /dev/random
*/  

    srand(time(0));
    // printf("%d",rand());
        // printf("%d",RAND_MAX);
        int min=50;
        int max=100;
/* rand(): returns a pseudo-random integer between 0 and randmax usually
 32767  he modulus % operator limits the random number to a specific range of size (max - min + 1).
So this gives a value between 0 and (max - min).
+ min  :Shifts the range up so that it starts at min instead of 0.
 */

        int randomNumb1=(rand()%(max-min+1))+min;
        int randomNumb2=(rand()%(max-min+1))+min;
        int randomNumb3=(rand()%(max-min+1))+min;

        printf("%d\n",randomNumb1);
        printf("%d\n",randomNumb2);
        printf("%d\n",randomNumb3);




    return 0;
}