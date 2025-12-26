#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    //this is a comment
    /* 
    this is multiline comments

    */
   // 
    char school; 
    int age=25;
    int year=2025;
    int quantity=15;
    float gpa=2.57895;
    float temperature=-10.125;
    char grade='A';
    char name[]="soukayna";
    char prenom[12];
    char food[]="lasagna";
    bool isOnline=true;
    bool isFake=0;

    printf("school :%c\n",school);
/* format specifier : special tokens witha %symbol 
 followed by a character that specifies the datattype and optional 
 modfiers (width,flag,precision)
 they only work on printf 
 */
    int num1=1;
    int num2=10;
    int num3=100;
    printf("%-4d\n",num1);
    printf("%04d\n",num2);
    printf("%04d\n",num3);
    printf("%+4d\n",num3);

    float price1=19.999;
    float price2=1.500;
    float price3=-100.100;

    printf("float : %+7.2f\n",price1);
    printf("float : %.2f\n",price2);
    printf("float : %.1f\n",price3);

    int x=2;
    int y=4;
    int l=5;
    float z=0;
    float o=0;
    float p=0;
    float m=0;
    m=l%2;
    z=x+y;
    p=y/x;
    o=x/y;
    x--;
    y=y+2;
    o=o*2;
    printf("o %f\n",o);
    printf("z:%.2f\n",z);
    printf("modulo:%f\n",m);
    printf("increment:%d\n",x);
    printf("decrement:%d\n",y);



    
    // with double you ca store 15-16 numbers after .
    double pi=3.1215914468465454;
    printf("the year is %d\n",year);
    printf("you are %d years old \n ",age);
    printf("hello soukayna \n ");
    printf("los gehts\n");
    printf("you have ordered %d x item\n",quantity);
    printf("your gpa is %.2f\n",gpa);
    printf("the temperature is %f\n ",temperature);
    printf("pi is a number %.9lf\n",pi);
    printf("your grade is %c\n",grade);
    printf("hello  %s\n",name);
    printf("your favorite food is %s\n",food);
    printf("he is online : %d\n",isOnline);
    if (isOnline){
        printf("you are online\n");
    }else{
        printf("you re offline\n");
    }

   
// you need string buffer to prevent unpredicted behaviors
    char names[30]="";
    char fullname[15]="";
    int ages=0;
    float grades=0.0f;
    printf("what you name\n"); 
    scanf(" %s", &names);
    printf("what you age\n"); 
    scanf(" %d", &ages);
    printf("what you grades\n"); 
  
    scanf(" %f", &grades);
    printf("%f\n",grades);
    // getchar() takes the next character from that buffer.
    getchar();
    printf("enter your full name\n");
    // scanf doesnt read any whitespaces
   // scanf(" %s\n",&fullname);
    fgets(fullname,sizeof(fullname),stdin);
    names[strlen(names)-1]='\0';

    printf("your full name is %s\n",fullname);





    return 0 ;
}
