#include <stdio.h>
#include <ctype.h>

int main(){
    char questions[][100]={"what is the largest planet in the solar system ?",
                            "what is the hottest planet ?",
                        "What planet has most moons ?",
                    "is the earth flat ?"};
    char options[][100]={"A.Jupiter\nB.Saturn\nC.Uranus\nD.Neptune\n",
                       "A.Mercery\nB.Venus\nC.Earth\nD.Mars\n",
                       "A.Earth\nB.Mars\nC.Jupiter\nD.Saturn\n",
                       "A.Yes\nB.No\nC.Maybe\nD.Sometimes\n"
                    };
    char answerkey[]={'A','B','D','A'};

    int QuestionCount=sizeof(questions)/sizeof(questions[0]);
    char guess='\0';
    int score=0;
    
    printf("\n**** Planet Trivia ****\n");

    for(int i=0;i<QuestionCount;i++){
    printf("\n%s\n",questions[i]);
    printf("\n%s",options[i]);
    printf("\nenter your choice :");
    scanf(" %c",&guess);
    guess=toupper(guess);
    if(guess==answerkey[i]){
        printf("CORRECT!!\n");
        score+=1;
    }else{
        printf("Wrong\n");
    }
    }
    printf("Your score is %d out of %d",score,QuestionCount);

   
    return 0;
}
