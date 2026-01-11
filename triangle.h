

void Triangle(int x){
    int l,c,e;
    for(l=1;l<=x;l++){
          for(c=1;c<=41-l;c++){
              printf(" ");
          }
          for(e=1;e<=2*l-1;e++){
              printf("*");
          }
          printf("\n");
    }

}
 