#include <stdio.h>
#include <math.h>
int main(){
    double radius =0.0;
    double area =0.0;
    double surfaceArea=0.0;
    double volume=0.0;
    const double PI=3.14159;
    printf("enter a radius : ");
    scanf(" %lf",&radius);
    area=pow(radius,2)*PI;
    surfaceArea=4*PI*pow(radius,2);
    volume=(4.0/3.0)*PI*pow(radius,3);
    printf("area equal %.2lf\n",area);
    printf("surfaceArea equal %.2lf\n",surfaceArea);
    printf("volume equal %.2lf\n",volume);



    return 0;
}