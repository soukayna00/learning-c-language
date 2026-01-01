#include <stdio.h>
#include <string.h>

int main(){

    char names[8][25]={0};
    int rows=sizeof(names)/sizeof(names[0]);

    for(int i=0;i<rows;i++){
        printf("enter a name: ");
        fgets(names[i],sizeof(names[i]),stdin);
         // to remove the newline character
         names[i][strlen(names[i])-1]='\0';

    }

    


  for(int i=0;i<rows;i++){
    printf("%s\n",names[i]);

  }
    
    return 0;
}