#include <stdio.h>
#include <stdbool.h>
int main(){
    int hours=12;
    int minutes=3;
    printf("%02d:%02d %s",hours,minutes,(hours<12)?"Am":"Pm");
    return 0;
}
