#include <stdio.h>

//c doesnt automatically clearn memory from programs that 
//used that memory previously


int main(){
    int scores[5]={0};
    
     for(int i=0;i<5;i++){
      printf("Enter a score: ");
      scanf("%d",&scores[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d\n",scores[i]);
    }
    return 0;
}