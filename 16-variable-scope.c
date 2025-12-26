#include <stdio.h>
int result=0; //global variable hard to debug
int add(int x,int y){
    int result=x+y;
    return result;
}
int subtract(int x,int y){
    int result=x-y;
    return result;
}
int main(){
    int result=subtract(3,4);

    printf("%d",result);
    return 0;
}