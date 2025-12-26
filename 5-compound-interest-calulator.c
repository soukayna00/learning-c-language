#include <stdio.h>
#include <math.h>


int main(){
    double deposit=0.0;
    double interest_rate=0.0;
    int year=0;
    int timescompound=0;
    double total =0.0;
    

    printf("Compound interest Calculator \n ");
    printf("Enter the deposit: ");
    scanf(" %lf",&deposit);
    printf("Enter the interest rate % (r): ");
    scanf(" %lf",&interest_rate);
    interest_rate=interest_rate/100;
    printf("Enter the number of years:(t) ");
    scanf(" %d",&year);
    printf("Enter the number of times compounded per year(n) ");
    scanf(" %d",&timescompound);
    
    total=deposit*pow(1+interest_rate/timescompound,timescompound*year);
    printf("after %d years the total will be $%.2lf ",year,total);




    return 0;
}