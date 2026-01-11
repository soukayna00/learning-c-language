#include <stdio.h>

int main(){
    FILE *pFile=fopen("input.txt","r");
    //buffer=temporary table
    char buffer[1024]={0};
    if(pFile==NULL){
        printf("could not open the file");
        return 1;
    }

    while(fgets(buffer,sizeof(buffer),pFile)!=NULL){
       printf("%s",buffer);
   }
    fclose(pFile);
    return 0;

  
}


    