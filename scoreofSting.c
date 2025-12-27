int scoreOfString(char* s) {
    int i;
    int score=0;
    if(strlen(s)>=2 || strlen(s)<=100){
        for(i=0;i<strlen(s)-1;i++){
            if(islower(s[i])){
                         if(s[i]!='\0'){
                              score+=abs(s[i+1]-s[i]);
                            }
                         else{
                            break;
                          }
            }
            else {
                break;
            }

        }
    }
     printf("%d",score);

    return score ;
}
