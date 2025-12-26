#include <stdio.h>
#include <string.h>

void happy_birthday(char name[],int age){
   printf("happy birthday to you! \n") ;
   printf("happy birthday to you! \n") ;
   printf("happy birthday dear %s \n",name) ;
   printf("happy birthday to you ! \n") ;
   printf("you are %d years old! \n",age) ;
}

int main(){
    char name[20]="";
    int age=0;
    printf("enter your name\n");
    fgets(name,sizeof(name), stdin);
    name[strlen(name)-1]='\0';
    printf("enter your age\n");
    scanf(" %d",&age);
    happy_birthday(name,age);
    return 0;
}