#include <stdio.h>
typedef int Number;
typedef char string[50];
typedef char Initials[3];

int main(){
// type def :reserved keyword that gives an existing datatype a
// nickname helps simplify complexes topics and improves readbility
    
    // Number x=3;
    // string name[]="souka Yna";
    // printf("%s",name);
    Initials user1="sz"; 
    Initials user2="bc";
    Initials user3="ef";


    printf("%s\n",user1);
    printf("%s\n",user2);
    printf("%s\n",user3);


    return 0;
}