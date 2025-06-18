#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, b;
    char c;
    while (1)
    {
        printf("Enter two numbers : ");
        scanf("%d %d", &a, &b);
        printf("Sum = %d\n", a + b);
        printf("Continue ? [y/n]");
        scanf(" %c", &c);
        if(c == 89 || c == 121){
            system("cls");
            continue;
        }
        else{
            break;
        }
    }
    
    return 0;
}