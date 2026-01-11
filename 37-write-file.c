#include <stdio.h>
#include <stdlib.h>


int main(){
    //write a file
    // FILE *pFile=fopen("output.txt","w") ;
    FILE *pFile=fopen("C:\\Users\\PC\\Desktop\\output.txt","w") ;

    char text[]="WHO S GONNA CARRY THE BOOTS ANF LOGS!\n stay hard !! ";
    if(pFile==NULL){

        printf("could not return this\n");
        return 1;
    }
     fprintf(pFile,"%s",text);
     printf("check your file sis ");
    fclose(pFile);
    return 0;
}