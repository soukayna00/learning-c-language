#include <stdio.h>
// typedef enum Day{
//     //defaults start with 0
//    SUNDAY=1,MONDAY=2,TUESDAY=3,WEDNESDAY=4 ,THURSDAY=5 ,FRIDAY=6 ,SATURDAY=7 
// }Day;

typedef enum Status{
    Sucess, Failure, Pending
}Status;
void ConnectStatus(Status status_conexion);

int main(){
   // e num: a user defined data type that concise of a set of a set of named 
   // integer constants benefit : replaces numbers with readable names
    // Day today=SUNDAY;
    // // printf("%d",today);

    // if(today==SUNDAY || today==SATURDAY){
    //     printf("it s a weekend");
    // }else{
    //     printf("it's a weekday");
    // }
       
    Status status_conexion=Failure;
     ConnectStatus(status_conexion);
    return 0;
}

void ConnectStatus(Status status_conexion){
     switch (status_conexion)
     {
     case Sucess:
        printf("connexion established\n");
        break;
    case Failure:
        printf("connexion failed\n");
        break;
    case Pending:
        printf("connecting ..\n");
        break;
     
     default:
        
        break;
     } 
}