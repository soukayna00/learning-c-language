#include <stdio.h>
#include <stdlib.h>

int main(){
    //malloc=> A function in c that dynamically allocates
    // a specified number of bytes
    int number=0;
    printf("Enter a number of grades: ");
     scanf("%d",&number); 
    //  we allocate from the heap instead of the stack
    char *grades=malloc(number*sizeof(char));
    int size=sizeof(grades)/sizeof(grades[0]);
    if(grades==NULL){
        printf("memory allocation failed");
        return 1;
    }
    for(int i=0;i<number;i++){
       printf("Enter a grade #%d ",i+1);
       scanf(" %c",&grades[i]);
    }
    for(int i=0 ;i<number;i++){
        printf("%c ",grades[i]);
    }

    free(grades);  //returning "rented" space back to the OS
    grades=NULL;   //avoiding dangling pointers

    return 0;
}
