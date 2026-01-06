#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isaFullTime;
}Student;
void printfStudent(Student stud);

int main(){
//struct=
// a custom container that holds multiple  pieces of related info 
// similar to objects in other language

   Student student1={"soukayna",25,4.0,true};
   Student student2={"nour",20,4.0,false};
   Student student3={"chaimae",21,4.0,true};
   Student student4={0};

      strcpy(student4.name,"Sandy");
      student4.age=27;
      student4.gpa=4.0;
      
     printfStudent(student1);
     printfStudent(student2);
     printfStudent(student3);

//    printf("%s\n",student1.name);
//    printf("%d\n",student1.age);
//    printf("%.2f\n",student1.gpa);
//    printf("%s\n",(student1.isaFullTime)?"yes":"no");
//    printf("%s\n",student2.name);
//    printf("%.2f\n",student1.gpa);
    //   printf("%s\n",student4.name);
    //   printf("%d\n",student4.age);
    //   printf("%.2f\n",student4.gpa);
    //   printf("%s\n",(student4.isaFullTime)?"yes":"no");

return 0;
}

void printfStudent(Student stud){
      
      printf("Name: %s\n",stud.name);
      printf("Age: %d\n",stud.age);
      printf("gpa: %.2f\n",stud.gpa);
      printf("full time: %s\n",(stud.isaFullTime)?"yes":"no");
      printf("\n");
}