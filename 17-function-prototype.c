#include <stdio.h>
#include <stdbool.h>

//function prototype
void hello(char name[],int age);
bool agecheck(int age);

int main(){
    /*
    function prototype provide the compiler w information about a function name retutn type and parameters before its actual definition
    */
    hello("spongebob",28);
    if(agecheck){
        printf("you are old enough to work in the Krusty Krab");
    }else{
        printf("you are not old enough to work in the krusty Krab");
    }
    return 0;
}

void hello(char name[],int age){
    printf("hello %s\n",name);
    printf("your are %d years old\n",age);
}

bool agecheck(int age){
    return age>=16; //returns a boolean
}