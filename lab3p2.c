#include <stdio.h>
 int main(){
     int mark;
     printf("Enter your mark : ");
     scanf("%d", &mark);
     
     if (mark>60){
         printf("First division");
     }
     else if (mark>=45){
         printf("Second division");
     }
     else if (mark>=33){
         printf("Third division");
     }
     else{
         printf("You failed!");
     }
     return 0;
 }