#include <stdio.h>

typedef struct{
    char model[25];
    int year;
    int price;
}car;

int main(){
    // array where each element contains a struct{}
    // helps orgonize and group together related data 
    car cars[]={{"Mustang",2025,32000},
                 {"corvette",2025,68000},
                 {"Challenger",2024,32000}  };
   
    int number=sizeof(cars)/sizeof(cars[0]);
    for(int i=0;i<number;i++){
        printf("%s %d $%d\n",cars[i].model,cars[i].year,cars[i].price);
    }
   


    return 0;
}