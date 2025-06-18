#include <stdio.h>

int main(){
    int s=0;
    for (int i = 1; i <= 100;i++){
        s += i;
    }
    printf("Sum = %d", s);
    return 0;
}