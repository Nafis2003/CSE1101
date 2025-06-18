#include <stdio.h>
#include <math.h>

int  main(){
    int n,p;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (n < 2){
        printf("There are no prime numbers between 1 and %d.\n", n);
        }
    else{
        printf("All prime numbers between 1 and %d:\n", n);
        for (int i = 2; i <= n;i++){
            p = 1;
            for (int j = 2; j <= sqrt(i);j++){
                if(i%j==0){
                    p = 0;
                    break;
                }
            }
            if(p){
                printf("%d ", i);
            }
        }
    }
    
    return 0;
}