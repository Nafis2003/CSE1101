#include <stdio.h>

int main(){
    int mark;
    printf("Enter your mark : ");
    scanf("%d", &mark);
    printf("%s", mark >= 33 ? "Pass" : "Fail");
    return 0;
}