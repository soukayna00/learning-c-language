#include <stdio.h>

int main(){
    int numbers[10]={1,2,3,4,5};
    char grades[]={'A','B','C','D','F'};
    char names[]="Soukayna";
    numbers[0]=100;
    printf("%d",numbers[0]);

    printf("%d",sizeof(numbers));   //the size of array in bits 
    printf("%d",sizeof(numbers[0]));  //the size of one element in bit 
    int numberofElements=sizeof(numbers)/sizeof(numbers[0]);
    printf("%d\n",sizeof(names));
    for(int i=0 ; i<sizeof(names);i++){
        printf("%c ",names[i]);
    }


    return 0;
}