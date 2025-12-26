#include <stdio.h>


int main(){
    char choice='\0';
    float fahrenheit=0.0f;
    float celius =0.0f;
    printf("Temperature conversion program");
    printf("c. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temperature in Celisius (c) or Fahrenheit (F ?: )");
    scanf("%c",&choice);
    if(choice=='C'){
        printf("enter the temperature i n Celisius ");
        scanf("%f",&celius);
        fahrenheit=(celius*9/5)+32;
        printf("%.1f Celsius is equal to %.1f Fahrenheit ",celius,fahrenheit);
    }
    else if(choice=='F'){
        printf("enter the temperature i n Fahrenheit ");
        scanf("%f",&fahrenheit);
        celius=(fahrenheit-32)*5/9;
        printf("%.1f fahrenheit is equal to %.1f celius",fahrenheit,celius);
    }else{
        printf("invalid choice,pls enter C or F ");
    }
    return 0;
}