#include <stdio.h>

void birthday(int *age);
int main(){
    //pointer=a variable that stores the memory address of another variable 
    // benefit : they help avoid wasting memory by allowing you to pass 
    // the address of a large data structure instead of copying the entire data

    int age=25;
    // * =dereference operator


    birthday(&age);
    printf("you are %d years old",age);


    return 0;
}
void birthday(int *age){
    // pass by reference  
    (*age)++;
}