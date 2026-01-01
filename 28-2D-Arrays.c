#include <stdio.h>

int main(){
  /*
  2D Array = An array where each element is an array
  array[]={},{},{}}
  */
 char numpad[][3]={{'1','2','3'},
                  {'4','5','6'},
                  {'7','8','9'},
                  {'*','0','#'}};
    
    int numbers[][3]={{1,2,3},{4,5,6,},{7,8,9}};
    // printf("%d",numbers[1][1]);
    
    for(int i=0 ;i<4;i++){
         for(int j=0 ;j<3;j++){
            printf("%d ",numpad[i][j]);
          }
      printf("\n");
    }
    return 0;
}