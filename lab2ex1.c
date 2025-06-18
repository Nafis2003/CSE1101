#include <stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    //Modular Approach
    if (n%2==0){
        printf("%d is an even number.[Modular Approach]\n", n);
    }
    else{
        printf("%d is an odd number.[Modular Approach]\n", n);
    }

    //Bitwise Approach
    if ((n & 1)==0)
    {
        printf("%d is an even number. [Bitwise Approach]\n", n);
    }
    else
    {
        printf("%d is an odd number.[Bitwise Approach]\n", n);
    }

    return 0;
}

