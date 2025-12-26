#include <stdio.h>

int main(){
    
   int rows=0;
   int columns=0;
   char sympbol='\0';

    printf("enter the number of rows : ");
    scanf("%d",&rows);
    printf("enter the number of columns : ");
    scanf("%d",&columns);
     printf("enter a symbol to use : ");
    scanf(" %c",&sympbol);

    for(int i=0;i<=rows;i++){
        for(int j=0;j<=columns;j++){
            printf(" %c",sympbol);
        }
        printf("\n");
    }


    return 0;
}