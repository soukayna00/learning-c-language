#include <stdio.h>
#include <string.h>

int main(){
// strlen()   Measures how many characters are actually in the string —
//  until the first '\0' (null terminator).
// sizeof()   memory size of the variable

   char name[50]="";
   printf("enter your name: ");
   fgets(name,sizeof(name),stdin);
   name[strlen(name)-1]='\0';

   if (strlen(name)==0){
       printf("you did not enter your name");
   }else{
       printf("hello %s",name);
   }
}
