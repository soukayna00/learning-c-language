#include <stdio.h>


int main(){
   char dayoftheweek='\0';
   printf("enter a day of the week (M,T,W,R,F,S,U)");
   scanf("%c",&dayoftheweek);
  switch(dayoftheweek){
  case 'M':
    printf("it is monday");
    break;
  case 'T':
    printf("its Tuesday");
    break;
   case 'W':
    printf("it s wednesday");
    break;
    case 'R':
    printf("it s thursaday");
    break;
    case 'F':
    printf("it s friday");
    break;
    case 'S' :
    printf("its saturday");
    break;
    case 'U':
    printf("its sunday");
    break;
    default:
       printf("please only enter a charcter  from (M,T,W,R,F,S,U)");
  }

    return 0;
}