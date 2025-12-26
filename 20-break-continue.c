#include <stdio.h>


int main(){
    //break=break out of a loop
    //continue =skip current cycle of a loop (skip)
    for(int i=1;i<=10;i++){
       
        if(i==4){
            continue;
        }
         printf("%d\n",i);
    }
    return 0;
}